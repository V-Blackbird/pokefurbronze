.equ LOCALID_YORI, 1
.equ LOCALID_VILL, 2

KailoTown_PlayersHouse_2F_MapScripts::
  map_script MAP_SCRIPT_ON_FRAME_TABLE, KailoTown_PlayersHouse_2F_OnFrame
  map_script MAP_SCRIPT_ON_LOAD, KailoTown_PlayersHouse_2F_OnLoad
  map_script MAP_SCRIPT_ON_TRANSITION, KailoTown_PlayersHouse_2F_OnTransition
  map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, KailoTown_PlayersHouse_2F_OnWarp
	.byte 0

KailoTown_PlayersHouse_2F_OnFrame::
    map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, KailoTown_PlayersHouse_2F_EventScript_Battle_Setup2
    .2byte 0

KailoTown_PlayersHouse_2F_OnLoad::
  goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, KailoTown_PlayersHouse_2F_EventScript_Battle_Setup
  end




KailoTown_PlayersHouse_2F_OnTransition::
	call_if_eq VAR_MAP_SCENE_KAILO_TOWN_PLAYERS_HOUSE_2F, 0, KailoTown_PlayersHouse_2F_EventScript_SetRespawn
	end

KailoTown_PlayersHouse_2F_EventScript_SetRespawn::
	setrespawn SPAWN_HOME
	return

KailoTown_PlayersHouse_2F_OnWarp::
	map_script_2 VAR_MAP_SCENE_KAILO_TOWN_PLAYERS_HOUSE_2F, 0, KailoTown_PlayersHouse_2F_FirstWarpIn
	.2byte 0

KailoTown_PlayersHouse_2F_FirstWarpIn::
	setvar VAR_MAP_SCENE_KAILO_TOWN_PLAYERS_HOUSE_2F, 1
	end





KailoTown_PlayersHouse_2F_EventScript_Battle_Setup::
  goto_if_eq VAR_GOT_STARTER, 1, KailoTown_PlayersHouse_2F_EventScript_BattleInit
  goto_if_eq VAR_GOT_STARTER, 2, KailoTown_PlayersHouse_2F_EventScript_BattleInit

KailoTown_PlayersHouse_2F_EventScript_Battle_Setup2::
  goto_if_eq VAR_GOT_STARTER, 1, KailoTown_PlayersHouse_2F_EventScript_Battle_Gilan
  goto_if_eq VAR_GOT_STARTER, 2, KailoTown_PlayersHouse_2F_EventScript_Battle_Marie

KailoTown_PlayersHouse_2F_EventScript_BattleInit::
  clearflag FLAG_HIDE_CUTSCENE_DUMMIES
  addobject LOCALID_YORI
  end

KailoTown_PlayersHouse_2F_EventScript_Battle_Gilan::
  textcolor NPC_TEXT_COLOR_MALE
  msgbox KailoTown_PlayersHouse_2F_Text_Yori_BattleInit
  playbgm MUS_ENCOUNTER_RIVAL, 0
  setflag FLAG_HIDE_CUTSCENE_DUMMIES
  setvar VAR_GOT_STARTER, 3
  msgbox KailoTown_PlayersHouse_2F_Text_Yori_BattleInit2
  goto KailoTown_PlayersHouse_2F_EventScript_RivalBattleSquirtle
  end

KailoTown_PlayersHouse_2F_EventScript_Battle_Marie::
  textcolor NPC_TEXT_COLOR_MALE
  msgbox KailoTown_PlayersHouse_2F_Text_Yori_BattleInit
  playbgm MUS_ENCOUNTER_RIVAL, 0
  setflag FLAG_HIDE_CUTSCENE_DUMMIES
  setvar VAR_GOT_STARTER, 3
  msgbox KailoTown_PlayersHouse_2F_Text_Yori_BattleInit2
  goto KailoTown_PlayersHouse_2F_EventScript_RivalBattleBulbasaur
  end

KailoTown_PlayersHouse_2F_EventScript_RivalBattleSquirtle::
  trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
  goto KailoTown_PlayersHouse_2F_EventScript_EndRivalBattle
  end

KailoTown_PlayersHouse_2F_EventScript_RivalBattleBulbasaur::
  trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
  goto KailoTown_PlayersHouse_2F_EventScript_EndRivalBattle
  end

KailoTown_PlayersHouse_2F_EventScript_EndRivalBattle::
  special HealPlayerParty
  msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
  closemessage
  playbgm MUS_RIVAL_EXIT, 0
  applymovement LOCALID_YORI, KailoTown_PlayersHouse_2F_Movement_RivalExitAfterBattle
  waitmovement 0
  removeobject LOCALID_YORI
  playse SE_EXIT
  fadedefaultbgm
  setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
  setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
  releaseall
  end

KailoTown_PlayersHouse_2F_Movement_RivalExitAfterBattle::
  walk_right
  walk_right
  walk_right
  walk_right
  walk_up
  walk_right
  walk_right
  walk_up
  walk_up
  walk_left
  step_end

KailoTown_PlayersHouse_2F_EventScript_Bed::
  lock
  msgbox KailoTown_PlayersHouse_2F_Text_WantSleep, MSGBOX_YESNO
  goto_if_eq VAR_RESULT, YES, KailoTown_PlayersHouse_2F_EventScript_Sleep
  goto_if_eq VAR_RESULT, NO, KailoTown_PlayersHouse_2F_EventScript_NoSleep
  closemessage
  release
  end

KailoTown_PlayersHouse_2F_EventScript_Sleep::
  lock
  msgbox KailoTown_PlayersHouse_2F_Text_WentSleep
  closemessage
  call EventScript_OutOfCenterPartyHeal
  msgbox KailoTown_PlayersHouse_2F_Text_Yawn
  closemessage
  release
  end

KailoTown_PlayersHouse_2F_EventScript_NoSleep::
  msgbox KailoTown_PlayersHouse_2F_Text_TooEarly
  closemessage
  release
  end

KailoTown_PlayersHouse_2F_EventScript_GBA::
  lock
  msgbox KailoTown_PlayersHouse_2F_Text_GBA
  closemessage
  release
  end

KailoTown_PlayersHouse_2F_EventScript_TV::
  lock
  msgbox KailoTown_PlayersHouse_2F_Text_TV
  closemessage
  release
  end

KailoTown_PlayersHouse_2F_EventScript_NES::
  lock
  msgbox KailoTown_PlayersHouse_2F_Text_PlayNES, MSGBOX_YESNO
  goto_if_eq VAR_RESULT, YES, KailoTown_PlayersHouse_2F_EventScript_Play
  goto_if_eq VAR_RESULT, NO, KailoTown_PlayersHouse_2F_EventScript_NoPlay
  closemessage
  release
  end

KailoTown_PlayersHouse_2F_EventScript_Play::
  playse SE_PC_ON
  message KailoTown_PlayersHouse_2F_Text_NESOn
  waitmessage
  delay 50
  closemessage
  applymovement OBJ_EVENT_ID_PLAYER, KailoTown_PlayersHouse_2F_Movement_PlayNES
  waitmovement 0
  fadescreen FADE_TO_BLACK
  delay 85
  delay 85
  fadescreen FADE_FROM_BLACK
  message KailoTown_PlayersHouse_2F_Text_NoRival
  waitmessage
  delay 85
  closemessage
  applymovement OBJ_EVENT_ID_PLAYER, KailoTown_PlayersHouse_2F_Movement_EndNES
  waitmovement 0
  playse SE_PC_OFF
  release
  end

KailoTown_PlayersHouse_2F_Movement_PlayNES::
  walk_right
  walk_down
  face_up
  step_end

KailoTown_PlayersHouse_2F_Movement_EndNES::
  walk_up
  walk_left
  face_up
  step_end

KailoTown_PlayersHouse_2F_EventScript_NoPlay::
  release
  end

KailoTown_PlayersHouse_2F_EventScript_Image::
  lock
  msgbox KailoTown_PlayersHouse_2F_Text_Image
  closemessage
  release
  end
