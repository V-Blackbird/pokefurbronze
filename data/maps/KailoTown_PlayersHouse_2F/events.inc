@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/KailoTown_PlayersHouse_2F/map.json
@

KailoTown_PlayersHouse_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BLUE, 5, 5, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_HIDE_CUTSCENE_DUMMIES
	object_event 2, OBJ_EVENT_GFX_GLACEON, 2, 5, 0, MOVEMENT_TYPE_FACE_LEFT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, FLAG_WHITEOUT_VILL

KailoTown_PlayersHouse_2F_MapWarps:
	warp_def 11, 2, 0, 0, MAP_PALLET_TOWN_PLAYERS_HOUSE_2F
	warp_def 7, 8, 0, 0, MAP_KAILO_TOWN_PLAYERS_HOUSE_2F_WINDOW
	warp_def 6, 8, 0, 0, MAP_KAILO_TOWN_PLAYERS_HOUSE_2F_WINDOW
	warp_def 8, 8, 0, 0, MAP_KAILO_TOWN_PLAYERS_HOUSE_2F_WINDOW
	warp_def 5, 8, 0, 0, MAP_KAILO_TOWN_PLAYERS_HOUSE_2F_WINDOW
	warp_def 9, 8, 0, 0, MAP_KAILO_TOWN_PLAYERS_HOUSE_2F_WINDOW

KailoTown_PlayersHouse_2F_MapBGEvents:
	bg_sign_event 6, 1, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_PlayersHouse_2F_EventScript_GB
	bg_sign_event 11, 1, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_PlayersHouse_2F_EventScript_Image
	bg_sign_event 5, 1, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_PlayersHouse_2F_EventScript_TV
	bg_sign_event 4, 1, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_PlayersHouse_2F_EventScript_NES
	bg_sign_event 3, 1, 0, BG_EVENT_PLAYER_FACING_ANY, PalletTown_PlayersHouse_2F_EventScript_PC
	bg_sign_event 1, 6, 0, BG_EVENT_PLAYER_FACING_SOUTH, KailoTown_PlayersHouse_2F_EventScript_Bed

KailoTown_PlayersHouse_2F_MapEvents::
	map_events KailoTown_PlayersHouse_2F_ObjectEvents, KailoTown_PlayersHouse_2F_MapWarps, NULL, KailoTown_PlayersHouse_2F_MapBGEvents

