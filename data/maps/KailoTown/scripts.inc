@ one tile run is 0.125 sec
@ one tile walk is 0.25 sec

KailoTown_MapScripts::
  map_script MAP_SCRIPT_ON_TRANSITION, KailoTown_OnTransition
  map_script MAP_SCRIPT_ON_LOAD, KailoTown_OnLoad
	.byte 0

KailoTown_OnTransition::
  call_if_unset FLAG_HIDE_CUTSCENE_DUMMIES, KailoTown_EventScript_FlagSetup
  end

KailoTown_OnLoad::
  call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, KailoTown_EventScript_AfterRain
  call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, KailoTown_EventScript_AfterRain
  call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, KailoTown_EventScript_AfterRain
  end

KailoTown_EventScript_AfterRain::
  call KailoTown_EventScript_PuddleDebuggersCave
  call KailoTown_EventScript_PuddleHouse
  call KailoTown_EventScript_PuddlePokemonCenter
  end

KailoTown_EventScript_PuddleDebuggersCave::
  setmetatile 14, 8, 0x1AA, 0
  setmetatile 14, 9, 0x1B2, 0
  setmetatile 12, 9, 0x1A8, 0
  setmetatile 12, 8, 0x1A8, 0
  setmetatile 13, 9, 0x1A9, 0
  setmetatile 13, 8, 0x1A9, 0
  return

KailoTown_EventScript_PuddleHouse::
  setmetatile 18, 11, 0x1AA, 0
  setmetatile 18, 12, 0x1AA, 0
  setmetatile 18, 13, 0x1AA, 0
  setmetatile 18, 14, 0x1B2, 0
  setmetatile 17, 14, 0x1A9, 0
  setmetatile 17, 15, 0x302, 0
  setmetatile 16, 16, 0x309, 0
  setmetatile 16, 15, 0x2FF, 1
  setmetatile 16, 14, 0x31E, 0
  setmetatile 16, 12, 0x1A9, 0
  setmetatile 16, 13, 0x1A8, 0
  setmetatile 16, 11, 0x1A0, 0
  setmetatile 17, 11, 0x1A9, 0
  setmetatile 17, 12, 0x1A9, 0
  setmetatile 17, 13, 0x1A9, 0
  return

KailoTown_EventScript_PuddlePokemonCenter::
  setmetatile 16, 18, 0x1A1, 0
  setmetatile 17, 18, 0x1A1, 0
  setmetatile 18, 18, 0x1A1, 0
  setmetatile 19, 18, 0x320, 0
  setmetatile 19, 19, 0x1AA, 0
  setmetatile 19, 20, 0x1AA, 0
  setmetatile 19, 21, 0x302, 0
  setmetatile 18, 22, 0x1B2, 0
  setmetatile 17, 22, 0x1B0, 0
  setmetatile 16, 21, 0x1B0, 0
  setmetatile 15, 20, 0x1B0, 0
  setmetatile 15, 19, 0x1A8, 0
  setmetatile 15, 18, 0x1A8, 0
  setmetatile 16, 19, 0x1A9, 0
  setmetatile 17, 19, 0x1A9, 0
  setmetatile 18, 19, 0x1A9, 0
  setmetatile 16, 20, 0x1A9, 0
  setmetatile 17, 20, 0x1A9, 0
  setmetatile 18, 20, 0x1A9, 0
  setmetatile 17, 21, 0x1A9, 0
  setmetatile 18, 21, 0x1A9, 0
  return

KailoTown_EventScript_FlagSetup::
  setflag FLAG_HIDE_CUTSCENE_DUMMIES
  return

KailoTown_EventScript_Jenny_Check::
  lock
  faceplayer
  call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, KailoTown_EventScript_Jenny_Pass
  call KailoTown_EventScript_Jenny
  release
  end

KailoTown_EventScript_Jenny::
  lock
  faceplayer
  textcolor NPC_TEXT_COLOR_FEMALE
  msgbox KailoTown_Text_JennyStopNoPassing
  closemessage
  release
  end

KailoTown_EventScript_Jenny_Pass::
  textcolor NPC_TEXT_COLOR_FEMALE
  msgbox KailoTown_Text_JennyPass
  closemessage
  applymovement OBJ_EVENT_ID_PLAYER, KailoTown_Movement_Jenny_Pass_Player_Move
  applymovement LOCALID_JENNY2, KailoTown_Movement_Jenny_Pass_Jenny_Move
  setflag FLAG_JENNY_ENTRANCE
  waitmovement 0
  release
  end

KailoTown_Movement_Jenny_Pass_Jenny_Move::
  walk_left
  walk_down
  walk_in_place_faster_up
  step_end

KailoTown_Movement_Jenny_Pass_Player_Move::
  walk_left
  walk_in_place_faster_right
  step_end

KailoTown_EventScript_JennyStop::
  lock
  textcolor NPC_TEXT_COLOR_FEMALE
  message KailoTown_Text_JennyStopWait
  waitmessage
  delay 85
  closemessage
  addobject LOCALID_JENNY
  playse SE_PIN
  applymovement OBJ_EVENT_ID_PLAYER, KailoTown_Movement_JennyStopPlayerSuprised
  applymovement LOCALID_JENNY, KailoTown_Movement_JennyStopJennyWalkIn
  waitmovement 0
  msgbox KailoTown_Text_JennyStopUnsafe
  closemessage
  applymovement LOCALID_JENNY, KailoTown_Movement_JennyStop_JennyBack
  applymovement OBJ_EVENT_ID_PLAYER, KailoTown_Movement_JennyStopPlayerBack
  waitmovement 0
  applymovement LOCALID_JENNY, KailoTown_Movement_JennyStop_JennyBlock
  msgbox KailoTown_Text_JennyStopNoPassing
  closemessage
  clearflag FLAG_JENNY_ENTRANCE
  addobject LOCALID_JENNY2
  removeobject LOCALID_JENNY
  release
  return

KailoTown_Movement_JennyStopPlayerSuprised::
  emote_exclamation_mark
  face_left
  step_end

KailoTown_Movement_JennyStopJennyWalkIn::
  walk_down
  walk_right
  walk_right
  walk_right
  walk_up
  walk_up
  walk_up
  walk_right
  walk_right
  walk_right
  walk_right
  walk_right
  step_end

KailoTown_Movement_JennyStopPlayerBack::
  walk_left
  walk_left
  walk_down
  face_up
  step_end

KailoTown_Movement_JennyStop_JennyBack::
  walk_left
  walk_left
  face_right
  step_end

KailoTown_Movement_JennyStop_JennyBlock::
  walk_right
  walk_right
  face_left
  step_end

KailoTown_EventScript_LabSign::
  msgbox KailoTown_Text_LabSign, MSGBOX_SIGN
  end

KailoTown_EventScript_DC::
  msgbox KailoTown_Text_DC, MSGBOX_SIGN
  end

KailoTown_EventScript_KailoSign::
  msgbox KailoTown_Text_KailoSign, MSGBOX_SIGN
  end

KailoTown_EventScript_Mailbox::
  msgbox KailoTown_Text_Mailbox, MSGBOX_SIGN
  end

KailoTown_EventScript_HelenMailbox::
  msgbox KailoTown_Text_HelenMailbox, MSGBOX_SIGN
  end

KailoTown_EventScript_DoorClosed::
  msgbox KailoTown_Text_DoorClosed, MSGBOX_SIGN
  end

KailoTown_EventScript_UnderConstruction::
  msgbox KailoTown_Text_UnderConstruction, MSGBOX_SIGN
  end

KailoTown_EventScript_Gym::
  msgbox KailoTown_Text_Gym, MSGBOX_SIGN
  end

KailoTown_EventScript_Unloader::
  lock
  message KailoTown_Text_Unloader
  waitmessage
  delay 50
  closemessage
  playse SE_PIN
  applymovement LOCALID_SELLER, KailoTown_Movement_SellerPin
  waitmovement 0
  faceplayer
  delay 30
  msgbox KailoTown_Text_GetOff
  closemessage
  delay 30
  applymovement LOCALID_SELLER, KailoTown_Movement_SellerBack
  release
  end

KailoTown_Movement_SellerPin::
  emote_exclamation_mark
  step_end

KailoTown_Movement_SellerBack::
  face_up
  step_end

KailoTown_EventScript_Girl::
  lock
  faceplayer
  msgbox KailoTown_Text_NoPopular
  closemessage
  release
  end

KailoTown_EventScript_Damien::
  lock
  faceplayer
  msgbox KailoTown_Text_NoLeader
  closemessage
  release
  end

KailoTown_EventScript_NoNurse::
  lock
  applymovement LOCALID_SELLER, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  textcolor NPC_TEXT_COLOR_MALE
  msgbox KailoTown_Text_NoNurse
  closemessage
  applymovement OBJ_EVENT_ID_PLAYER, KailoTown_Movement_NoNurseBack
  applymovement LOCALID_SELLER, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  waitmovement 0
  release
  end

KailoTown_Movement_NoNurseBack::
  walk_down
  step_end

KailoTown_EventScript_WildBattleTest::
  lock
  setvar VAR_STARTER_MON, SPECIES_MARIE
  giveitem ITEM_POKE_BALL 1
  special StartStarterBattle
  waitstate
  call_if_eq VAR_TEMP_0, 1, KailoTown_EventScript_WildBattleTest2
  givemon VAR_STARTER_MON, 5
  setvar VAR_STARTER_MON, 0
  release
  end

KailoTown_EventScript_WildBattleTest2::
  msgbox KailoTown_Text_Try_Again
  giveitem ITEM_POKE_BALL 1
  closemessage
  special StartStarterBattle
  waitstate
  textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_OBTAIN_KEY_ITEM
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
	waitmessage
	waitfanfare
	call EventScript_RestorePrevTextColor
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
  special EnableNationalPokedex
  setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
  givemon VAR_STARTER_MON, 5
  givemon SPECIES_GILAN, 5
  givemon SPECIES_EVEREST, 5
  givemon SPECIES_MARIEF, 5
  givemon SPECIES_GILANG, 5
  givemon SPECIES_VILL, 5
  setvar VAR_STARTER_MON, 0
  release
  end

KailoTown_Text_Try_Again::
    .string "Try again$"
