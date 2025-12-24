#include "global.h"
#include "pokedex.h"
#include "pokedex_screen.h"

// External declarations for pokedex order arrays
extern const u16 gPokedexOrder_Kanto[];

// Unused
const u8 *GetPokedexCategoryName(u16 dexNum)
{
    return gPokedexEntries[dexNum].categoryName;
}

u16 GetPokedexHeightWeight(u16 dexNum, u8 data)
{
    switch (data)
    {
    case 0:  // height
        return gPokedexEntries[dexNum].height;
    case 1:  // weight
        return gPokedexEntries[dexNum].weight;
    default:
        return 1;
    }
}

s8 GetSetPokedexFlag(u16 nationalDexNo, u8 caseID)
{
    return DexScreen_GetSetPokedexFlag(nationalDexNo, caseID, 0);
}

// Convert Kanto dex number to National dex number
u16 KantoToNationalOrder(u16 kantoDexNum)
{
    if (kantoDexNum == 0 || kantoDexNum > KANTO_DEX_COUNT)
        return 0;
    return gPokedexOrder_Kanto[kantoDexNum - 1];
}

// Convert National dex number to Kanto dex number (returns 0 if not in Kanto dex)
u16 NationalToKantoOrder(u16 nationalDexNum)
{
    u16 i;
    
    if (nationalDexNum == 0)
        return 0;
        
    for (i = 0; i < KANTO_DEX_COUNT; i++)
    {
        if (gPokedexOrder_Kanto[i] == nationalDexNum)
            return i + 1;
    }
    return 0;
}

u16 GetNationalPokedexCount(u8 caseID)
{
    u16 count = 0;
    u16 i;

    for (i = 0; i < NATIONAL_DEX_COUNT; i++)
    {
        switch (caseID)
        {
        case FLAG_GET_SEEN:
            if (GetSetPokedexFlag(i + 1, FLAG_GET_SEEN))
                count++;
            break;
        case FLAG_GET_CAUGHT:
            if (GetSetPokedexFlag(i + 1, FLAG_GET_CAUGHT))
                count++;
            break;
        }
    }
    return count;
}

/*
u16 GetHoennPokedexCount(u8 caseID)
{
    u16 count = 0;
    u16 i;

    for (i = 0; i < HOENN_DEX_COUNT; i++)
    {
        switch (caseID)
        {
        case FLAG_GET_SEEN:
            if (GetSetPokedexFlag(HoennToNationalOrder(i + 1), FLAG_GET_SEEN))
                count++;
            break;
        case FLAG_GET_CAUGHT:
            if (GetSetPokedexFlag(HoennToNationalOrder(i + 1), FLAG_GET_CAUGHT))
                count++;
            break;
        }
    }
    return count;
}
*/

u16 GetKantoPokedexCount(u8 caseID)
{
    u16 count = 0;
    u16 i;

    for (i = 0; i < KANTO_DEX_COUNT; i++)
    {
        switch (caseID)
        {
        case FLAG_GET_SEEN:
            if (GetSetPokedexFlag(KantoToNationalOrder(i + 1), FLAG_GET_SEEN))
                count++;
            break;
        case FLAG_GET_CAUGHT:
            if (GetSetPokedexFlag(KantoToNationalOrder(i + 1), FLAG_GET_CAUGHT))
                count++;
            break;
        }
    }
    return count;
}

bool16 HasAllHoennMons(void)
{
    u16 i;

    // -2 excludes Jirachi and Deoxys
    for (i = 0; i < HOENN_DEX_COUNT - 2; i++)
    {
        if (!GetSetPokedexFlag(HoennToNationalOrder(i + 1), FLAG_GET_CAUGHT))
            return FALSE;
    }
    return TRUE;
}

bool16 HasAllKantoMons(void)
{
    u16 i;

    // -1 excludes Mew
    for (i = 0; i < KANTO_DEX_COUNT - 1; i++)
    {
        if (!GetSetPokedexFlag(KantoToNationalOrder(i + 1), FLAG_GET_CAUGHT))
            return FALSE;
    }
    return TRUE;
}

bool16 HasAllMons(void)
{
    u16 i;

    // -1 excludes Mew from Kanto dex
    for (i = 0; i < KANTO_DEX_COUNT - 1; i++)
    {
        if (!GetSetPokedexFlag(KantoToNationalOrder(i + 1), FLAG_GET_CAUGHT))
            return FALSE;
    }

    // Check Johto range, -3 excludes Lugia, Ho-Oh, and Celebi
    // Start from Chikorita (159), which is NATIONAL_DEX_MEW + 1
    for (i = NATIONAL_DEX_MEW; i < JOHTO_DEX_COUNT - 3; i++)
    {
        if (!GetSetPokedexFlag(i + 1, FLAG_GET_CAUGHT))
            return FALSE;
    }

    // -2 excludes Jirachi and Deoxys from remaining mons
    for (i = JOHTO_DEX_COUNT; i < NATIONAL_DEX_COUNT - 2; i++)
    {
        if (!GetSetPokedexFlag(i + 1, FLAG_GET_CAUGHT))
            return FALSE;
    }
    return TRUE;
}
