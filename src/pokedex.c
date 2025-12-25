#include "global.h"
#include "pokedex.h"
#include "pokedex_screen.h"
#include "constants/species.h"

// External declarations for pokedex order arrays
extern const u16 gPokedexOrder_Kanto[];

// Fractional dex number mapping for fabular Pokemon
struct FractionalDexEntry
{
    u16 species;      // The fabular species ID
    u16 baseDexNum;   // The base dex number (e.g., 133 for Eevee)
    u8 fraction;      // The fractional part (e.g., 1 for .1, 2 for .2)
};

static const struct FractionalDexEntry sFractionalDexEntries[] =
{
    {SPECIES_MARIE,    133, 1},  // 133.1 (Eevee variant)
    {SPECIES_GILAN,    133, 2},  // 133.2 (Eevee variant)
    {SPECIES_EVEREST,  133, 3},  // 133.3 (Eevee variant)
    {SPECIES_MARIEF,   136, 1},  // 136.1 (Flareon variant)
    {SPECIES_EVERESTL, 470, 1},  // 470.1 (Leafeon variant)
    {SPECIES_VILL,     471, 1},  // 471.1 (Glaceon variant)
    {SPECIES_GILANG,   471, 2},  // 471.2 (Glaceon variant)
};

#define NUM_FRACTIONAL_DEX_ENTRIES ARRAY_COUNT(sFractionalDexEntries)

// Check if a species is a fabular variant
bool8 IsFabularSpecies(u16 species)
{
    u16 i;
    for (i = 0; i < NUM_FRACTIONAL_DEX_ENTRIES; i++)
    {
        if (sFractionalDexEntries[i].species == species)
            return TRUE;
    }
    return FALSE;
}

// Get fractional dex info for a species (returns TRUE if fabular)
bool8 GetFractionalDexNumber(u16 species, u16 *baseDexNum, u8 *fraction)
{
    u16 i;
    for (i = 0; i < NUM_FRACTIONAL_DEX_ENTRIES; i++)
    {
        if (sFractionalDexEntries[i].species == species)
        {
            *baseDexNum = sFractionalDexEntries[i].baseDexNum;
            *fraction = sFractionalDexEntries[i].fraction;
            return TRUE;
        }
    }
    return FALSE;
}

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
    u16 nationalDexNum;
    u16 species;

    for (i = 0; i < KANTO_DEX_COUNT; i++)
    {
        nationalDexNum = KantoToNationalOrder(i + 1);
        species = NationalPokedexNumToSpecies(nationalDexNum);
        
        // Skip fabular Pokemon in count
        if (IsFabularSpecies(species))
            continue;
            
        switch (caseID)
        {
        case FLAG_GET_SEEN:
            if (GetSetPokedexFlag(nationalDexNum, FLAG_GET_SEEN))
                count++;
            break;
        case FLAG_GET_CAUGHT:
            if (GetSetPokedexFlag(nationalDexNum, FLAG_GET_CAUGHT))
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
