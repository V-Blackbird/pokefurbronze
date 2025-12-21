@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/KailoTown/map.json
@

KailoTown_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_POLICEMAN, 5, 5, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 1, TRAINER_TYPE_NONE, 0, KailoTown_EventScript_Damien, 0
	object_event 2, OBJ_EVENT_GFX_WOMAN_1, 17, 19, 0, MOVEMENT_TYPE_WANDER_AROUND, 5, 4, TRAINER_TYPE_NONE, 0, KailoTown_EventScript_Girl, 0
	object_event 3, OBJ_EVENT_GFX_CLERK, 24, 19, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, KailoTown_EventScript_Unloader, 0
	object_event 4, OBJ_EVENT_GFX_POLICEMAN, 14, 13, 0, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, KailoTown_EventScript_Jenny, FLAG_HIDE_CUTSCENE_DUMMIES
	object_event 5, OBJ_EVENT_GFX_POLICEMAN, 22, 11, 0, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, KailoTown_EventScript_Jenny_Check, FLAG_JENNY_ENTRANCE

KailoTown_MapWarps:
	warp_def 4, 13, 0, 0, MAP_KAILO_TOWN_PROF_BLACKBIRDS_LAB
	warp_def 14, 12, 0, 0, MAP_KAILO_TOWN_DELICIOUS_CAFE
	warp_def 21, 17, 0, 0, MAP_KAILO_TOWN_POKEMON_CENTER_1F
	warp_def 20, 10, 0, 1, MAP_KAILO_TOWN_PLAYERS_HOUSE_1F
	warp_def 13, 7, 0, 0, MAP_HEROES
	warp_def 29, 11, 0, 1, MAP_DYERS_TUNNEL
	warp_def 5, 4, 0, 0, MAP_DYNAMIC

KailoTown_MapCoordEvents:
	coord_event 23, 11, 0, VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, KailoTown_EventScript_JennyStop
	coord_event 21, 19, 0, VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, KailoTown_EventScript_NoNurse
	coord_event 21, 19, 0, VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, KailoTown_EventScript_NoNurse
	coord_event 21, 19, 0, VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, KailoTown_EventScript_NoNurse
	coord_event 21, 19, 0, VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, KailoTown_EventScript_NoNurse
	coord_event 16, 8, 0, VAR_TEMP_1, 0, KailoTown_EventScript_WildBattleTest

KailoTown_MapBGEvents:
	bg_sign_event 5, 14, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_EventScript_LabSign
	bg_sign_event 10, 17, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_EventScript_HelenMailbox
	bg_sign_event 16, 10, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_EventScript_Mailbox
	bg_sign_event 4, 6, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_EventScript_UnderConstruction
	bg_sign_event 6, 5, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_EventScript_Gym
	bg_sign_event 16, 15, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_EventScript_KailoSign
	bg_sign_event 15, 12, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_EventScript_DC
	bg_sign_event 12, 17, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_EventScript_DoorClosed

KailoTown_MapEvents::
	map_events KailoTown_ObjectEvents, KailoTown_MapWarps, KailoTown_MapCoordEvents, KailoTown_MapBGEvents

