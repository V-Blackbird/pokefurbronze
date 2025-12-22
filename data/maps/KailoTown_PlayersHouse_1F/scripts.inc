KailoTown_PlayersHouse_1F_MapScripts::
  map_script MAP_SCRIPT_ON_FRAME_TABLE, KailoTown_PlayersHouse_1F_OnFrame
	.byte 0

KailoTown_PlayersHouse_1F_OnFrame::
  map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 0, KailoTown_PlayersHouse_1F_EventScript_Mom
  .2byte 0

KailoTown_PlayersHouse_1F_EventScript_MomTalk::
  lock
  faceplayer
  textcolor NPC_TEXT_COLOR_FEMALE
  msgbox KailoTown_PlayersHouse_1F_Text_MomTalk
  waitmessage
  closemessage
  applymovement LOCALID_MOM, KailoTown_PlayersHouse_1F_Movement_MomSitBack
  waitmovement 0
  release
  end

KailoTown_PlayersHouse_1F_EventScript_Mom::
  lockall
  textcolor NPC_TEXT_COLOR_FEMALE
  applymovement LOCALID_MOM, KailoTown_PlayersHouse_1F_Movement_MomStart
  playse SE_PIN
  message KailoTown_PlayersHouse_1F_Text_MomPlayer
  waitmessage
  waitse
  closemessage
  waitmovement 0
  msgbox KailoTown_PlayersHouse_1F_Text_MomAwake
  applymovement LOCALID_MOM, KailoTown_PlayersHouse_1F_Movement_MomGameboy
  delay 16
  applymovement OBJ_EVENT_ID_PLAYER, KailoTown_PlayersHouse_1F_Movement_Player_Gameboy
  checkplayergender
  goto_if_eq VAR_RESULT, FEMALE, KailoTown_PlayersHouse_1F_EventScript_MomTina
  msgbox KailoTown_PlayersHouse_1F_Text_MomGameboyDan
  closemessage
  waitmovement 0
  applymovement LOCALID_MOM, KailoTown_PlayersHouse_1F_Movement_MomSit
  setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
  waitmovement 0
  releaseall
  end

KailoTown_PlayersHouse_1F_EventScript_MomTina::
  msgbox KailoTown_PlayersHouse_1F_Text_MomGameboyTina
  waitmovement 0
  applymovement LOCALID_MOM, KailoTown_PlayersHouse_1F_Movement_MomSit
  waitmovement 0
  releaseall
  end

KailoTown_PlayersHouse_1F_Movement_MomSitBack::
  walk_in_place_faster_left
  step_end

KailoTown_PlayersHouse_1F_Movement_MomStart::
  walk_in_place_faster_up
  emote_exclamation_mark
  delay_16
  delay_16
  delay_8
  walk_up
  walk_right
  walk_up
  walk_right
  walk_up
  walk_up
  walk_in_place_faster_right
  step_end

KailoTown_PlayersHouse_1F_Movement_MomGameboy::
  walk_down
  walk_right
  walk_left
  walk_up
  walk_down
  walk_right
  walk_left
  walk_up
  walk_down
  walk_right
  walk_left
  walk_up
  walk_down
  walk_right
  walk_left
  walk_up
  walk_in_place_faster_right
  step_end

KailoTown_PlayersHouse_1F_Movement_Player_Gameboy::
  walk_in_place_faster_down
  delay_16
  delay_8
  delay_4
  walk_in_place_faster_left
  delay_16
  delay_8
  delay_4
  walk_in_place_faster_down
  delay_16
  delay_8
  delay_4
  walk_in_place_faster_left
  delay_16
  delay_8
  delay_4
  walk_in_place_faster_down
  delay_16
  delay_8
  delay_4
  walk_in_place_faster_left
  delay_16
  delay_8
  delay_4
  walk_in_place_faster_down
  delay_16
  delay_8
  delay_4
  walk_in_place_faster_left
  step_end

KailoTown_PlayersHouse_1F_Movement_MomSit::
  walk_down
  walk_down
  walk_down
  walk_left
  walk_left
  walk_down
  walk_in_place_faster_left
  step_end
