EventScript_AfterWhiteOutHeal::
	lockall
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox Text_FirstShouldRestoreMonsHealth
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	call_if_unset FLAG_DEFEATED_BROCK, EventScript_AfterWhiteOutHealMsgPreBrock
	call_if_set FLAG_DEFEATED_BROCK, EventScript_AfterWhiteOutHealMsg
	applymovement VAR_LAST_TALKED, Movement_Bow
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

EventScript_AfterWhiteOutHealMsgPreBrock::
	msgbox Text_MonsHealedShouldBuyPotions
	return

EventScript_AfterWhiteOutHealMsg::
	msgbox Text_MonsHealed
	return

@ LOCALID_VILL set by KailoTown_PlayersHouse_2F

EventScript_AfterWhiteOutMomHeal::
	lockall
	textcolor NPC_TEXT_COLOR_NEUTRAL
	msgbox Text_YawnAfterFaint
	playmoncry SPECIES_VILL, CRY_MODE_NORMAL
	delay 10
	applymovement OBJ_EVENT_ID_PLAYER, FaintedHouse_Movement
	waitmoncry
	msgbox Text_HadQuiteAnExperienceTakeRest
	special HealPlayerParty
	closemessage
	playmoncry SPECIES_VILL, CRY_MODE_DOUBLES
	waitmoncry
	delay 25
	applymovement LOCALID_VILL, FaintedHouse_Vill_Exit
	waitmovement 0
	removeobject LOCALID_VILL
	setflag FLAG_WHITEOUT_VILL
	applymovement OBJ_EVENT_ID_PLAYER, FaintedHouse_Get_Mon
	waitmovement 0
	removeobject LOCALID_BALL
	message FaintedHouse_Got_Mon
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	closemessage
	fadedefaultbgm
	releaseall
	end

FaintedHouse_Get_Mon::
    walk_right
    walk_up
    walk_up
    walk_up
    step_end

FaintedHouse_Vill_Exit::
    walk_right
    walk_right
    walk_right
    walk_up
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_up
    walk_up
    walk_right
    step_end

FaintedHouse_Movement::
    emote_exclamation_mark
    walk_in_place_faster_right
    step_end

EventScript_FieldPoison::
	lockall
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special TryFieldPoisonWhiteOut
	waitstate
	goto_if_eq VAR_RESULT, TRUE, EventScript_FieldWhiteOut
	releaseall
	end

EventScript_FieldWhiteOut::
	checkmoney 1
	goto_if_eq VAR_RESULT, FALSE, EventScript_FieldWhiteOutNoMoney
	goto_if_eq VAR_RESULT, TRUE, EventScript_FieldWhiteOutHasMoney
	end

EventScript_FieldWhiteOutNoMoney::
	msgbox Text_WhitedOut
	goto EventScript_FieldWhiteOutFade
	end

EventScript_FieldWhiteOutHasMoney::
	special OverworldWhiteOutGetMoneyLoss
	msgbox Text_WhitedOutLostMoney
	goto EventScript_FieldWhiteOutFade
	end

EventScript_FieldWhiteOutFade::
	special Script_FadeOutMapMusic
	waitstate
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate
	end
