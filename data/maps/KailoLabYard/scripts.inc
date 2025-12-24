KailoLabYard_MapScripts::
	.byte 0

KailoLabYard_Vill::
  lock
	faceplayer
	waitse
	playmoncry SPECIES_VILL, CRY_MODE_DOUBLES
	msgbox KailoLabyard_Text_Vill
	waitmoncry
	release
	end

KailoLabYard_StartBlackbirdMeeting::
  lockall
  textcolor NPC_TEXT_COLOR_MALE
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_PlayerStart
  waitmovement 0
  playse SE_PIN
  addobject LOCALID_GILAN1
  setobjectmovementtype LOCALID_GILAN1, MOVEMENT_TYPE_FACE_RIGHT
  applymovement LOCALID_GILAN1, KailoLabYard_Movement_StartBlackbirdMeeting_GilanStart
  waitmovement 0
  playmoncry SPECIES_EEVEE, CRY_MODE_DOUBLES
  delay 85
  delay 50
  playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
  applymovement LOCALID_GILAN1, KailoLabYard_Movement_StartBlackbirdMeeting_GilanJumps
  waitmovement 0
  removeobject LOCALID_GILAN1
  setobjectmovementtype LOCALID_GILAN, MOVEMENT_TYPE_FACE_LEFT
  delay 50
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_PlayerMiddle
  waitmovement 0
  playse SE_PIN
  message KailoLabYard_Text_StartBlackbirdMeeting_VictorLaugh
  waitmessage
  delay 85
  closemessage
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_PlayerEnd
  delay 50
  delay 25
  removeobject LOCALID_VICTOR
  setobjectmovementtype LOCALID_GILAN, MOVEMENT_TYPE_FACE_LEFT
  waitmovement 0
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_VictorGilanGetOff
  closemessage
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_GilanSmile
  playmoncry SPECIES_EEVEE, CRY_MODE_DOUBLES
  delay 85
  delay 85
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_Vill
  playmoncry SPECIES_VILL, CRY_MODE_NORMAL
  waitmovement 0
  delay 85
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_GilanExclamation
  waitmovement 0
  playse SE_PIN
  applymovement LOCALID_MARIE, KailoLabYard_Movement_StartBlackbirdMeeting_Marie_Everest
  waitmovement 0
  playse SE_PIN
  applymovement LOCALID_EVEREST, KailoLabYard_Movement_StartBlackbirdMeeting_Marie_Everest
  waitmovement 0
  playse SE_PIN
  delay 85
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_VictorHello
  closemessage
  delay 30
  setobjectmovementtype LOCALID_VICTORL, MOVEMENT_TYPE_INVISIBLE
  removeobject LOCALID_VICTORL
  addobject LOCALID_VICTORL
  setobjectxy LOCALID_VICTORL, 2, 5
  addobject LOCALID_VICTOR
  delay 5
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorStandUp
  waitmovement 0
  addobject LOCALID_YORI_LAB
  message KailoLabYard_Text_StartBlackbirdMeeting_YoriHi
  waitmessage
  delay 85
  closemessage
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_Vill
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_YoriStart
  waitmovement 0
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_YoriLate
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_VictorNotReally
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_YoriMiddle
  message KailoLabYard_Text_StartBlackbirdMeeting_YoriYes
  delay 50
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_PlayerTurn
  delay 50
  delay 50
  delay 85
  closemessage
  delay 30
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_VictorWell
  closemessage
  delay 50
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  applymovement LOCALID_MARIE, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  delay 50
  applymovement LOCALID_MARIE, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  applymovement LOCALID_EVEREST, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  delay 50
  applymovement LOCALID_EVEREST, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  delay 50
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  waitmovement 0
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_VictorChoseOne
  closemessage
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  delay 50
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  delay 15
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  delay 50
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_YoriGilan
  delay 50
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  delay 70
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  waitmovement 0
  delay 50
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  message KailoLabYard_Text_StartBlackbirdMeeting_YoriLaugh1
  delay 50
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  waitmovement 0
  delay 25
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  delay 10
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  waitmovement 0
  delay 10
  playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  waitmovement 0
  delay 10
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  waitmovement 0
  message KailoLabYard_Text_StartBlackbirdMeeting_YoriLaugh2
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  waitmovement 0
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  waitmovement 0
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  waitmovement 0
  playse SE_CONTEST_HEART
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_GilanHeart
  waitmovement 0
  delay 50
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_YoriCHoose
  closemessage
  setvar RIVAL_STARTER_SPECIES, SPECIES_GILAN
  textcolor NPC_TEXT_COLOR_NEUTRAL
  bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
  message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
  waitmessage
  playfanfare MUS_OBTAIN_KEY_ITEM
  waitfanfare
  textcolor NPC_TEXT_COLOR_MALE
  setobjectmovementtype LOCALID_GILAN, MOVEMENT_TYPE_FACE_LEFT
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_YoriChosen
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_GilanYori
  delay 25
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  delay 50
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  delay 10
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_VictorAndYou
  setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
  closemessage
  releaseall
  end
  
KailoLabYard_Movement_StartBlackbirdMeeting_PlayerStart::
  walk_left
  emote_exclamation_mark
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_GilanStart::
  player_run_right
  player_run_right
  player_run_right
  player_run_right
  player_run_up
  player_run_right
  player_run_up
  player_run_right
  walk_in_place_faster_right
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_GilanJumps::
  jump_up
  jump_down
  jump_down
  jump_up
  jump_up
  jump_down
  walk_in_place_faster_right
  delay_16
  delay_16
  player_run_left
  player_run_down
  player_run_left
  player_run_down
  player_run_left
  player_run_left
  player_run_left
  player_run_left
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_PlayerMiddle::
  walk_left
  walk_left
  walk_left
  emote_exclamation_mark
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_PlayerEnd::
  walk_down
  walk_left
  walk_down
  walk_left
  walk_left
  walk_left
  walk_left
  walk_left
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_GilanSmile::
  emote_smile
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_Vill::
  walk_in_place_faster_right
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_Marie_Everest::
  emote_exclamation_mark
  walk_in_place_faster_right
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_GilanExclamation::
  emote_exclamation_mark
  player_run_right
  walk_in_place_faster_right
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_VictorStandUp::
  walk_in_place_faster_up
  delay_8
  walk_in_place_faster_right
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_YoriStart::
  walk_left
  walk_left
  walk_left
  walk_down
  walk_left
  walk_down
  walk_left
  walk_left
  walk_left
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_PlayerTurn::
  walk_in_place_faster_down
  delay_16
  walk_in_place_faster_left
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_YoriMiddle::
  walk_left
  walk_down
  walk_left
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie::
  walk_in_place_faster_down
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor::
  walk_in_place_faster_up
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan::
  walk_in_place_faster_right
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor::
  walk_in_place_faster_left
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_YoriGilan::
  walk_left
  walk_left
  walk_up
  walk_left
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_GilanHeart::
  emote_smile
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_YoriChosen::
  walk_down
  walk_left
  walk_down
  walk_left
  walk_in_place_faster_right
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_GilanYori::
  walk_right
  walk_down
  walk_left
  walk_down
  walk_in_place_faster_left
  step_end

KailoLabYard_YoriWhere::
  lock
  textcolor NPC_TEXT_COLOR_MALE
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_YoriWhere
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_DanBack
  waitmovement 0
  closemessage
  release
  end

KailoLabYard_Movement_StartBlackbirdMeeting_DanBack::
  walk_left
  step_end

KailoLabYard_GilanChose::
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_WantGilan
  goto PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
  end
  
KailoLabYard_StartBlackbirdMeeting_RivalWalksToBulbasaur::
	applymovement LOCALID_YORI_LAB, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
	waitmovement 0
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesMarie
	end

KailoLabYard_Tutorial_GiveBall::
  textcolor NPC_TEXT_COLOR_MALE
  msgbox KailoLabYard_Text_StarBlackbirdMeeting_ReceivedStarter
  closemessage
  goto_if_eq PLAYER_STARTER_NUM, 2, KailoLabYard_Tutorial_GiveBallEverest
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_Tutorial_GiveBall
  delay 50
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  delay 75
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  delay 10
  textcolor NPC_TEXT_COLOR_NEUTRAL
  giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 1
  textcolor NPC_TEXT_COLOR_MALE
  message KailoLabYard_Text_StarBlackbirdMeeting_Balls
  waitmessage
  applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_RivalReact
  msgbox KailoLabYard_Text_StarBlackbirdMeeting_DanSays
  waitmovement 0
  closemessage
  delay 50
  applymovement LOCALID_YORI_LAB, PalletTown_ProfessorOaksLab_Movement_RivalReact
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  msgbox KailoLabYard_Text_StarBlackbirdMeeting_YoriBalls
  waitmovement 0
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  msgbox KailoLabYard_Text_StarBlackbirdMeeting_VictorYesBalls
  delay 25
  msgbox KailoLabYard_Text_StarBlackbirdMeeting_VictorShow
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  waitmovement 0
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_VillReady
  closemessage
  playmoncry SPECIES_VILL, CRY_MODE_DOUBLES
  waitmoncry
  delay 25
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_Tutorial_PrepareTutorial
  waitmovement 0
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  delay 10
  goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
  special StartOldManTutorialBattle
  waitstate
  goto KailoLabYard_Tutorial_AfterTutorial
  end

KailoLabYard_Tutorial_GiveBallEverest::
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_Tutorial_GiveBallEverest
  delay 50
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  delay 75
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  delay 10
  textcolor NPC_TEXT_COLOR_NEUTRAL
  giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 1
  textcolor NPC_TEXT_COLOR_MALE
  message KailoLabYard_Text_StarBlackbirdMeeting_Balls
  waitmessage
  applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_DanReact
  msgbox KailoLabYard_Text_StarBlackbirdMeeting_DanSays
  waitmovement 0
  closemessage
  delay 50
  applymovement LOCALID_YORI_LAB, PalletTown_ProfessorOaksLab_Movement_RivalReact
  waitmovement 0
  delay 20
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  msgbox KailoLabYard_Text_StarBlackbirdMeeting_YoriBalls
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  msgbox KailoLabYard_Text_StarBlackbirdMeeting_VictorYesBalls
  waitmovement 0
  delay 50
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  delay 50
  msgbox KailoLabYard_Text_StarBlackbirdMeeting_VictorShow
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  waitmovement 0
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_VillReady
  closemessage
  playmoncry SPECIES_VILL, CRY_MODE_DOUBLES
  waitmoncry
  delay 25
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_Tutorial_PrepareTutorial
  waitmovement 0
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  delay 10
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  waitmovement 0
  goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
  special StartOldManTutorialBattle
  waitstate
  goto KailoLabYard_Tutorial_AfterTutorial
  end

KailoLabYard_Tutorial_AfterTutorial::
  setobjectmovementtype LOCALID_VILL, MOVEMENT_TYPE_FACE_DOWN
  removeobject LOCALID_VILL
  addobject LOCALID_BALL
  delay 50
  removeobject LOCALID_BALL
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_Whew
  closemessage
  addobject LOCALID_BALL
  delay 25
  removeobject LOCALID_BALL
  addobject LOCALID_VILL
  playmoncry SPECIES_VILL CRY_MODE_NORMAL
  waitmoncry
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_LetMe
  textcolor NPC_TEXT_COLOR_NEUTRAL
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_BrokeBall
  delay 10
  goto_if_eq PLAYER_STARTER_NUM, 2, KailoLabYard_Tutorial_VillLookEverest
  goto_if_eq PLAYER_STARTER_NUM, 1, KailoLabYard_Tutorial_VillLookMarieGilan
  goto_if_eq PLAYER_STARTER_NUM, 0, KailoLabYard_Tutorial_VillLookMarieGilan
  closemessage
  releaseall
  end

KailoLabYard_Tutorial_VillLookEverest::
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  goto_if_eq PLAYER_STARTER_NUM, 2, KailoLabYard_Tutorial_YoriCatchGilan
  goto_if_eq PLAYER_STARTER_NUM, 0, KailoLabYard_Tutorial_YoriCatchGilan
  goto_if_eq PLAYER_STARTER_NUM, 1, KailoLabYard_Tutorial_YoriCatchMarie
  release
  end

KailoLabYard_Tutorial_VillLookMarieGilan::
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_VillWalksCloser
  waitmovement 0
  delay 45
  applymovement LOCALID_EVEREST, KailoLabYard_Movement_StartBlackbirdMeeting_EverestJumps
  waitmovement 0
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  setobjectmovementtype LOCALID_VILL, MOVEMENT_TYPE_FACE_LEFT
  setobjectmovementtype LOCALID_EVEREST, MOVEMENT_TYPE_WANDER_AROUND
  goto_if_eq PLAYER_STARTER_NUM, 2, KailoLabYard_Tutorial_YoriCatchGilan
  goto_if_eq PLAYER_STARTER_NUM, 0, KailoLabYard_Tutorial_YoriCatchGilan
  goto_if_eq PLAYER_STARTER_NUM, 1, KailoLabYard_Tutorial_YoriCatchMarie
  releaseall
  end

KailoLabYard_Movement_Tutorial_GiveBall::
  walk_left
  walk_down
  walk_down
  walk_in_place_faster_right
  delay_16
  walk_up
  walk_up
  walk_right
  walk_right
  walk_in_place_faster_down
  step_end

KailoLabYard_Movement_Tutorial_GiveBallEverest::
  walk_left
  walk_down
  walk_down
  walk_in_place_faster_right
  delay_16
  walk_up
  walk_up
  walk_right
  walk_right
  walk_in_place_faster_up
  step_end

KailoLabYard_Movement_Tutorial_PrepareTutorial::
  walk_right
  walk_right
  walk_in_place_faster_up
  step_end

PalletTown_ProfessorOaksLab_Movement_DanReact::
	walk_in_place_down
	walk_in_place_down
	step_end

KailoLabYard_Movement_StartBlackbirdMeeting_VillWalksCloser::
  walk_left
  face_down
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_EverestJumps::
  jump_in_place_right
  step_end
  
KailoLabYard_Tutorial_YoriCatchGilan::
  textcolor NPC_TEXT_COLOR_MALE
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  delay 25
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_ThatsIt
  closemessage
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  applymovement LOCALID_MARIE, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  waitmovement 0
  applymovement LOCALID_EVEREST, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_Nyiagh
  textcolor NPC_TEXT_COLOR_NEUTRAL
  message KailoLabYard_Text_StartBlackbirdMeeting_YoriUsedBall
  waitmessage
  closemessage
  delay 25
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  fadeoutbgm 0
  playse SE_BALL_THROW
  addobject LOCALID_BALL
  setobjectxy LOCALID_BALL, 3, 11
  applymovement LOCALID_BALL, KailoLabYard_Movement_StartBlackbirdMeeting_YoriThrowGilan
  waitmovement 0
  waitse
  playse SE_BALL_TRAY_ENTER
  delay 15
  setflag FLAG_HIDE_SQUIRTLE_BALL
  setobjectmovementtype LOCALID_GILAN, MOVEMENT_TYPE_INVISIBLE
  removeobject LOCALID_GILAN
  addobject LOCALID_GILAN
  setobjectxy LOCALID_GILAN, 2, 4
  goto KailoLabYard_YoriCatching
  release
  end

KailoLabYard_Tutorial_YoriCatchMarie::
  textcolor NPC_TEXT_COLOR_MALE
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_ThatsIt
  closemessage
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  applymovement LOCALID_MARIE, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  waitmovement 0
  applymovement LOCALID_EVEREST, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_Nyiagh
  textcolor NPC_TEXT_COLOR_NEUTRAL
  message KailoLabYard_Text_StartBlackbirdMeeting_YoriUsedBall
  waitmessage
  closemessage
  delay 25
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  fadeoutbgm 0
  playse SE_BALL_THROW
  addobject LOCALID_BALL
  setobjectxy LOCALID_BALL, 3, 11
  applymovement LOCALID_BALL, KailoLabYard_Movement_StartBlackbirdMeeting_YoriThrowMarie
  waitmovement 0
  waitse
  playse SE_BALL_TRAY_ENTER
  delay 15
  setflag FLAG_HIDE_BULBASAUR_BALL
  setobjectmovementtype LOCALID_MARIE, MOVEMENT_TYPE_INVISIBLE
  removeobject LOCALID_MARIE
  addobject LOCALID_MARIE
  setobjectxy LOCALID_MARIE, 2, 4
  goto KailoLabYard_YoriCatching
  release
  end

KailoLabYard_Movement_StartBlackbirdMeeting_YoriThrowGilan::
  walk_right
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_YoriThrowMarie::
  walk_up
  step_end

KailoLabYard_YoriCatching::
  waitse
  playse SE_BALL_BOUNCE_1
  waitse
  delay 10
  playse SE_BALL_BOUNCE_2
  waitse
  delay 5
  playse SE_BALL_BOUNCE_3
  waitse
  playse SE_BALL_BOUNCE_4
  delay 50
  playse SE_BALL
  delay 50
  playse SE_BALL
  delay 50
  playse SE_BALL
  delay 50
  playse SE_BALL_CLICK
  waitse
  delay 50
  playbgm MUS_CAUGHT_INTRO, 0
  bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
  textcolor NPC_TEXT_COLOR_NEUTRAL
  message KailoLabYard_Text_StartBlackbirdMeeting_YoriCaught
  waitse
  closemessage
  delay 50
  textcolor NPC_TEXT_COLOR_MALE
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  msgbox KailoLabYard_Text_StartBlackbirdMeeting_YoriIDidIt
  closemessage
  playbgm MUS_SEVII_67, 0
  delay 50
  goto_if_eq PLAYER_STARTER_NUM, 2, KailoLabYard_AfterTutorial_PlayerCatchEverest
  goto_if_eq PLAYER_STARTER_NUM, 0, KailoLabYard_AfterTutorial_PlayerCatchMarie
  goto_if_eq PLAYER_STARTER_NUM, 1, KailoLabYard_AfterTutorial_PlayerCatchGilan
  release
  end

KailoLabYard_AfterTutorial_PlayerCatchEverest::
  applymovement LOCALID_YORI_LAB KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  removeobject LOCALID_BALL
  delay 50
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  applymovement OBJ_EVENT_ID_PLAYER KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  applymovement LOCALID_YORI_LAB KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  msgbox KailoLabYard_Text_AfterTutorial_YourTurn
  closemessage
  applymovement LOCALID_EVEREST, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  applymovement OBJ_EVENT_ID_PLAYER KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  applymovement LOCALID_MARIE, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  delay 50

  setvar VAR_STARTER_MON, SPECIES_EVEREST
  special StartStarterBattle
  waitstate
  call_if_eq VAR_TEMP_0, 1, KailoLabYard_AfterTutorial_PlayerCatchEverestFailed

  setflag FLAG_HIDE_CHARMANDER_BALL
  setflag FLAG_HIDE_BULBASAUR_BALL
  setflag FLAG_HIDE_SQUIRTLE_BALL
  setobjectmovementtype LOCALID_EVEREST, MOVEMENT_TYPE_INVISIBLE
  removeobject LOCALID_EVEREST
  addobject LOCALID_EVEREST
  setobjectxy LOCALID_EVEREST, 2, 6
  goto KailoLabYard_PlayerCatching
  release
  end

KailoLabYard_AfterTutorial_PlayerCatchEverestFailed::
  playmoncry SPECIES_EEVEE, CRY_MODE_HIGH_PITCH
  applymovement LOCALID_EVEREST, KailoLabYard_Movement_CatchFailedEverest
  playse SE_LEDGE
  delay 50
  playmoncry SPECIES_VILL, CRY_MODE_DOUBLES
  applymovement LOCALID_VILL, KailoLabYard_Movement_CatchFailedEverestVillWalk
  delay 50
  playse SE_PIN
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_CatchFailedEverestVictorWalk
  waitmovement 0
  msgbox KailoLabYard_Text_AfterFailedBattle_Everest_Victor
  closemessage
  playmoncry SPECIES_VILL, CRY_MODE_NORMAL
  waitmoncry
  applymovement LOCALID_VILL, KailoLabYard_Movement_CatchFailedEverestVillWalkAway
  waitmovement 0
  waitse
  delay 20
  playse SE_LEDGE
  applymovement LOCALID_EVEREST, KailoLabYard_Movement_CatchFailedEverestJumpIn
  delay 16
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  delay 120
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  waitmovement 0
  playmoncry SPECIES_EEVEE, CRY_MODE_DOUBLES
  waitmoncry
  msgbox KailoLabYard_Text_AfterFailedBattle_VictorWell
  closemessage
  applymovement LOCALID_VILL, KailoLabYard_Movement_CatchFailedEverestVillWalkBack
  delay 16
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_CatchFailedEverestVictorWalkBack
  waitmovement 0
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  msgbox KailoLabYard_Text_AfterFailedBattle_GiveBall
  giveitem ITEM_POKE_BALL 1
  closemessage
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_CatchFailedEverestVictorWalkBack2
  waitmovement 0
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  special StartStarterBattle
  waitstate
  setvar VAR_STARTER_MON, 2
  setvar VAR_0x8004, SPECIES_EEVEE
  special SetSeenMon
  special SetCaughtMon
  setvar VAR_0x8004, SPECIES_GLACEON
  special SetSeenMon
  setvar VAR_0x8004, SPECIES_MARIE
  special SetSeenMon
  setvar VAR_0x8004, SPECIES_GILAN
  special SetSeenMon
  setvar VAR_0x8004, SPECIES_VILL
  special SetSeenMon
  special SetCaughtMon
  return
  end

KailoLabYard_Movement_CatchFailedEverest::
  jump_2_left
  walk_in_place_faster_right
  step_end

KailoLabYard_Movement_CatchFailedEverestVillWalk::
  walk_down
  walk_left
  walk_left
  walk_left
  walk_up
  walk_in_place_faster_left
  step_end

KailoLabYard_Movement_CatchFailedEverestVictorWalk::
  walk_in_place_faster_left
  emote_exclamation_mark
  delay_16
  walk_left
  walk_left
  walk_left
  walk_left
  step_end

KailoLabYard_Movement_CatchFailedEverestVillWalkAway::
  walk_down
  walk_in_place_faster_up
  step_end

KailoLabYard_Movement_CatchFailedEverestVictorJumpBack::
  jump_down
  walk_in_place_faster_up
  step_end

KailoLabYard_Movement_CatchFailedEverestJumpIn::
  jump_right
  delay_16
  delay_16
  walk_in_place_faster_down
  delay_16
  delay_16
  walk_in_place_faster_right
  delay_16
  walk_slow_right
  step_end

KailoLabYard_Movement_CatchFailedEverestVillWalkBack::
  walk_right
  walk_right
  walk_right
  walk_up
  walk_in_place_faster_down
  step_end

KailoLabYard_Movement_CatchFailedEverestVictorWalkBack::
  walk_right
  walk_right
  walk_in_place_faster_up
  step_end

KailoLabYard_Movement_CatchFailedEverestVictorWalkBack2::
  walk_right
  walk_right
  walk_in_place_faster_left
  step_end

KailoLabYard_AfterTutorial_PlayerCatchMarie::
  applymovement LOCALID_YORI_LAB KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  removeobject LOCALID_BALL
  delay 50
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  applymovement OBJ_EVENT_ID_PLAYER KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  applymovement LOCALID_YORI_LAB KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  msgbox KailoLabYard_Text_AfterTutorial_YourTurn
  closemessage
  applymovement LOCALID_MARIE, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  applymovement OBJ_EVENT_ID_PLAYER KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  applymovement LOCALID_EVEREST, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  delay 50

  setvar VAR_STARTER_MON, SPECIES_MARIE
  special StartStarterBattle
  waitstate
  call_if_eq VAR_TEMP_0, 1, KailoLabYard_AfterTutorial_PlayerCatchMarieFailed

  setflag FLAG_HIDE_CHARMANDER_BALL
  setflag FLAG_HIDE_BULBASAUR_BALL
  setflag FLAG_HIDE_SQUIRTLE_BALL
  setobjectmovementtype LOCALID_MARIE, MOVEMENT_TYPE_INVISIBLE
  removeobject LOCALID_MARIE
  addobject LOCALID_MARIE
  setobjectxy LOCALID_MARIE, 2, 6
  goto KailoLabYard_PlayerCatching
  release
  end

KailoLabYard_AfterTutorial_PlayerCatchMarieFailed::
  playmoncry SPECIES_EEVEE, CRY_MODE_HIGH_PITCH
  applymovement LOCALID_MARIE, KailoLabYard_Movement_CatchFailedMarie
  playse SE_LEDGE
  delay 50
  playmoncry SPECIES_VILL, CRY_MODE_DOUBLES
  applymovement LOCALID_VILL, KailoLabYard_Movement_CatchFailedMarieVillWalk
  delay 50
  playse SE_PIN
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_CatchFailedMarieVictorWalk
  waitmovement 0
  msgbox KailoLabYard_Text_AfterFailedBattle_Marie_Victor
  closemessage
  playmoncry SPECIES_VILL, CRY_MODE_NORMAL
  waitmoncry
  applymovement LOCALID_VILL, KailoLabYard_Movement_CatchFailedMarieVillWalkAway
  waitmovement 0
  delay 20
  playse SE_LEDGE
  applymovement LOCALID_MARIE, KailoLabYard_Movement_CatchFailedMarieJumpIn
  delay 16
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  delay 120
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  waitmovement 0
  playmoncry SPECIES_EEVEE, CRY_MODE_DOUBLES
  waitmoncry
  msgbox KailoLabYard_Text_AfterFailedBattle_VictorWell
  closemessage
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_CatchFailedMarieVictorWalkBack
  waitmovement 0
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  msgbox KailoLabYard_Text_AfterFailedBattle_GiveBall
  giveitem ITEM_POKE_BALL 1
  closemessage
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_CatchFailedMarieVictorWalkBack2
  applymovement LOCALID_VILL, KailoLabYard_Movement_CatchFailedMarieVillWalkBack
  waitmovement 0
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  special StartStarterBattle
  waitstate
  setvar VAR_STARTER_MON, 0
  setvar VAR_0x8004, SPECIES_EEVEE
  special SetSeenMon
  setvar VAR_0x8004, SPECIES_GLACEON
  special SetSeenMon
  setvar VAR_0x8004, SPECIES_GILAN
  special SetSeenMon
  setvar VAR_0x8004, SPECIES_EVEREST
  special SetSeenMon
  setvar VAR_0x8004, SPECIES_VILL
  special SetSeenMon
  special SetCaughtMon
  return
  end

KailoLabYard_Movement_CatchFailedMarie::
  jump_2_left
  walk_in_place_faster_right
  step_end

KailoLabYard_Movement_CatchFailedMarieVillWalk::
  walk_down
  walk_left
  walk_left
  walk_left
  walk_down
  walk_in_place_faster_left
  step_end

KailoLabYard_Movement_CatchFailedMarieVictorWalk::
  walk_in_place_faster_left
  emote_exclamation_mark
  delay_16
  walk_left
  walk_left
  walk_left
  walk_left
  step_end

KailoLabYard_Movement_CatchFailedMarieVillWalkAway::
  walk_down
  walk_in_place_faster_up
  step_end

KailoLabYard_Movement_CatchFailedMarieJumpIn::
  jump_right
  delay_16
  delay_16
  walk_in_place_faster_up
  delay_16
  walk_in_place_faster_down
  delay_16
  walk_in_place_faster_right
  delay_16
  walk_slow_right
  step_end

KailoLabYard_Movement_CatchFailedMarieVictorWalkBack::
  walk_right
  walk_right
  walk_in_place_faster_down
  step_end

KailoLabYard_Movement_CatchFailedMarieVictorWalkBack2::
  walk_right
  walk_right
  walk_in_place_faster_down
  step_end

KailoLabYard_Movement_CatchFailedMarieVillWalkBack::
  walk_up
  walk_up
  walk_right
  walk_right
  walk_right
  walk_up
  walk_in_place_faster_down
  step_end

#############################################################################################################################

KailoLabYard_AfterTutorial_PlayerCatchGilan::
  applymovement LOCALID_YORI_LAB KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  removeobject LOCALID_BALL
  delay 50
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  applymovement OBJ_EVENT_ID_PLAYER KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  msgbox KailoLabYard_Text_AfterTutorial_YourTurn
  closemessage
  applymovement LOCALID_GILAN, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  applymovement OBJ_EVENT_ID_PLAYER KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  applymovement LOCALID_EVEREST, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  delay 50
  
  setvar VAR_STARTER_MON, SPECIES_GILAN
  special StartStarterBattle
  waitstate
  call_if_eq VAR_TEMP_0, 1, KailoLabYard_AfterTutorial_PlayerCatchGilanFailed

  setflag FLAG_HIDE_SQUIRTLE_BALL
  setflag FLAG_HIDE_CHARMANDER_BALL
  setflag FLAG_HIDE_SQUIRTLE_BALL
  setobjectmovementtype LOCALID_GILAN, MOVEMENT_TYPE_INVISIBLE
  removeobject LOCALID_GILAN
  addobject LOCALID_GILAN
  setobjectxy LOCALID_GILAN, 2, 6
  goto KailoLabYard_PlayerCatching
  release
  end

KailoLabYard_AfterTutorial_PlayerCatchGilanFailed::
  playmoncry SPECIES_EEVEE, CRY_MODE_HIGH_PITCH
  applymovement LOCALID_GILAN, KailoLabYard_Movement_CatchFailedGilan
  playse SE_LEDGE
  delay 8
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_CatchFailedGilanYoriJump
  playse SE_LEDGE
  message KailoLabYard_Text_AfterFailedBattle_Yori_Woah
  delay 12
  playse SE_LEDGE
  waitmessage
  closemessage
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  delay 50
  playmoncry SPECIES_VILL, CRY_MODE_DOUBLES
  applymovement LOCALID_VILL, KailoLabYard_Movement_CatchFailedGilanVillWalk
  delay 50
  playse SE_PIN
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_CatchFailedGilanVictorWalk
  waitmovement 0
  msgbox KailoLabYard_Text_AfterFailedBattle_Gilan_Victor
  closemessage
  playmoncry SPECIES_VILL, CRY_MODE_NORMAL
  waitmoncry
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_CatchFailedGilanVictorWalkAway
  playse SE_LEDGE
  applymovement LOCALID_GILAN, KailoLabYard_Movement_CatchFailedGilanJumpIn
  delay 16
  waitse
  playse SE_LEDGE
  waitse
  delay 20
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  delay 4
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  delay 100
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  delay 16
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  delay 4
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  waitmovement 0
  playmoncry SPECIES_EEVEE, CRY_MODE_DOUBLES
  waitmoncry
  msgbox KailoLabYard_Text_AfterFailedBattle_VictorWell
  closemessage
  applymovement LOCALID_VILL, KailoLabYard_Movement_CatchFailedGilanVillWalkBack
  delay 16
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_CatchFailedGilanVictorWalkBack
  waitmovement 0
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_MarieLookVictor
  msgbox KailoLabYard_Text_AfterFailedBattle_GiveBall
  giveitem ITEM_POKE_BALL 1
  closemessage
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_CatchFailedMarieVictorWalkBack2
  waitmovement 0
  applymovement OBJ_EVENT_ID_PLAYER, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_CatchFailedGilanYoriWalkBack
  msgbox KailoLabYard_Text_AfterFailedBattle_Yori_ThatWas
  waitmovement 0
  applymovement LOCALID_YORI_LAB, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookGilan
  msgbox KailoLabYard_Text_AfterFailedBattle_Yori_Unexpected
  waitmovement 0
  closemessage
  delay 16
  special StartStarterBattle
  waitstate
  setvar VAR_STARTER_MON, 2
  setvar VAR_0x8004, SPECIES_EEVEE
  special SetSeenMon
  setvar VAR_0x8004, SPECIES_GLACEON
  special SetSeenMon
  setvar VAR_0x8004, SPECIES_MARIE
  special SetSeenMon
  setvar VAR_0x8004, SPECIES_EVEREST
  special SetSeenMon
  setvar VAR_0x8004, SPECIES_VILL
  special SetSeenMon
  special SetCaughtMon
  return
  end

KailoLabYard_Movement_CatchFailedGilan::
  jump_2_left
  player_run_left
  jump_down
  walk_in_place_faster_right
  step_end

KailoLabYard_Movement_CatchFailedGilanYoriJump::
  jump_down
  walk_in_place_faster_up
  delay_4
  walk_in_place_faster_left
  step_end

KailoLabYard_Movement_CatchFailedGilanVillWalk::
  walk_down
  walk_left
  walk_left
  walk_left
  walk_down
  walk_down
  walk_down
  walk_in_place_faster_left
  step_end

KailoLabYard_Movement_CatchFailedGilanVictorWalk::
  walk_in_place_faster_left
  emote_exclamation_mark
  delay_16
  walk_left
  walk_left
  walk_left
  walk_left
  walk_down
  walk_down
  walk_in_place_fast_left
  step_end

KailoLabYard_Movement_CatchFailedGilanVictorWalkAway::
  delay_16
  jump_up
  walk_in_place_faster_up
  step_end

KailoLabYard_Movement_CatchFailedGilanVillWalkBack::
  walk_up
  walk_up
  walk_up
  walk_right
  walk_right
  walk_right
  walk_up
  walk_in_place_faster_down
  step_end

KailoLabYard_Movement_CatchFailedGilanVictorWalkBack::
  walk_up
  walk_up
  walk_in_place_faster_down
  delay_16
  walk_down
  walk_right
  walk_right
  walk_in_place_faster_down
  step_end

KailoLabYard_Movement_CatchFailedGilanJumpIn::
  jump_up
  walk_right
  delay_16
  delay_16
  walk_in_place_faster_up
  delay_16
  walk_in_place_faster_down
  delay_16
  walk_in_place_faster_right
  delay_16
  walk_slow_right
  walk_slow_right
  walk_in_place_faster_up
  step_end

KailoLabYard_Movement_CatchFailedGilanYoriWalkBack::
  walk_up
  step_end

#############################################################################################################################

KailoLabYard_Movement_StartBlackbirdMeeting_PlayerThrowEverest::
  walk_left
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_PlayerThrowGilan::
  walk_down
  step_end

KailoLabYard_PlayerCatching::
  setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
  setflag FLAG_HIDE_STARTER_SCENE
  call_if_eq PLAYER_STARTER_NUM, 2, KailoLabYard_AfterTutorial_MarieToVictor
  call_if_eq PLAYER_STARTER_NUM, 1, KailoLabYard_AfterTutorial_EverestToVictor
  call_if_eq PLAYER_STARTER_NUM, 0, KailoLabYard_AfterTutorial_EverestToVictor
  release
  end

KailoLabYard_AfterTutorial_MarieToVictor::
  applymovement LOCALID_MARIE, KailoLabYard_Movement_StartBlackbirdMeeting_MarieToVictor
  delay 75
  waitmovement 0
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  setobjectmovementtype LOCALID_VILL, MOVEMENT_TYPE_FACE_LEFT
  setobjectmovementtype LOCALID_MARIE, MOVEMENT_TYPE_FACE_RIGHT
  return

KailoLabYard_AfterTutorial_EverestToVictor::
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_VictorToEverest
  applymovement LOCALID_EVEREST, KailoLabYard_Movement_StartBlackbirdMeeting_EverestToVictor
  delay 75
  waitmovement 0
  applymovement LOCALID_VILL, KailoLabYard_Movement_StartBlackbirdMeeting_VictorLookMarie
  waitmovement 0
  setobjectmovementtype LOCALID_VILL, MOVEMENT_TYPE_FACE_LEFT
  setobjectmovementtype LOCALID_EVEREST, MOVEMENT_TYPE_FACE_RIGHT
  return

KailoLabYard_Movement_StartBlackbirdMeeting_MarieToVictor::
  walk_right
  walk_right
  walk_up
  walk_in_place_faster_right
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_EverestToVictor::
  walk_down
  walk_right
  step_end

KailoLabYard_Movement_StartBlackbirdMeeting_VictorToEverest::
  walk_left
  step_end

KailoLabYard_Victor::
  goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, KailoLabYard_Victor_Whisper
  lock
  faceplayer
  msgbox KailoLabYard_Text_Victor_SelectMon
  closemessage
  release
  end

KailoLabYard_Victor_Whisper::
  lock
  message KailoLabYard_Text_Victor_TakeLetter
  waitmessage
  message KailoLabYard_Text_Victor_Huh
  waitmessage
  delay 50
  closemessage
  delay 10
  faceplayer
  delay 25
  msgbox KailoLabYard_Text_Victor_Something
  closemessage
  applymovement LOCALID_VICTOR, KailoLabYard_Movement_StartBlackbirdMeeting_GilanLookVictor
  waitmovement 0
  release
  end

KailoLabYard_YoriVill::
  lock
  faceplayer
  msgbox KailoLabYard_Text_YoriVill
  release
  end
