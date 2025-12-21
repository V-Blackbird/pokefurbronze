@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/KailoLabYard/map.json
@

KailoLabYard_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_EEVEE, 3, 8, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, PalletTown_ProfessorOaksLab_EventScript_CharmanderBall, FLAG_HIDE_CHARMANDER_BALL
	object_event 2, OBJ_EVENT_GFX_GLACEON, 6, 8, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, KailoLabYard_Vill, FLAG_HIDE_STARTER_SCENE
	object_event 3, OBJ_EVENT_GFX_BLACKBIRD, 3, 9, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, KailoLabYard_Victor, FLAG_HIDE_CUTSCENE_DUMMIES
	object_event 4, OBJ_EVENT_GFX_EEVEE, 3, 9, 1, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, TRAINER_TYPE_NONE, 0, PalletTown_ProfessorOaksLab_EventScript_SquirtleBall, FLAG_HIDE_SQUIRTLE_BALL
	object_event 5, OBJ_EVENT_GFX_EEVEE, 3, 10, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall, FLAG_HIDE_BULBASAUR_BALL
	object_event 6, OBJ_EVENT_GFX_BLUE, 17, 7, 1, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, KailoLabYard_YoriVill, FLAG_HIDE_CUTSCENE_DUMMIES
	object_event 7, OBJ_EVENT_GFX_EEVEE, 9, 9, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_HIDE_CUTSCENE_DUMMIES
	object_event 8, OBJ_EVENT_GFX_BLACKBIRD_LYING_DOWN, 3, 9, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_HIDE_STARTER_SCENE
	object_event 9, OBJ_EVENT_GFX_ITEM_BALL, 6, 8, 0, MOVEMENT_TYPE_NONE, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_HIDE_CUTSCENE_DUMMIES

KailoLabYard_MapWarps:
	warp_def 19, 7, 0, 1, MAP_KAILO_TOWN_PROF_BLACKBIRDS_LAB

KailoLabYard_MapCoordEvents:
	coord_event 18, 7, 0, VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, KailoLabYard_StartBlackbirdMeeting
	coord_event 10, 9, 0, VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, KailoLabYard_YoriWhere
	coord_event 10, 9, 0, VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight
	coord_event 10, 10, 0, VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, KailoLabYard_YoriWhere
	coord_event 10, 10, 0, VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft

KailoLabYard_MapEvents::
	map_events KailoLabYard_ObjectEvents, KailoLabYard_MapWarps, KailoLabYard_MapCoordEvents, NULL

