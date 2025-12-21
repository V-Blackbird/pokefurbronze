@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/KailoTown_PokemonCenter_2F/map.json
@

KailoTown_PokemonCenter_2F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_BOY, 6, 8, 0, MOVEMENT_TYPE_FACE_UP, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0
	object_event 2, OBJ_EVENT_GFX_BATTLE_GIRL, 0, 3, 0, MOVEMENT_TYPE_FACE_RIGHT, 0, 0, TRAINER_TYPE_NONE, 0, NULL, 0

KailoTown_PokemonCenter_2F_MapWarps:
	warp_def 13, 7, 0, 1, MAP_KAILO_TOWN_POKEMON_CENTER_1F

KailoTown_PokemonCenter_2F_MapBGEvents:
	bg_sign_event 13, 4, 0, BG_EVENT_PLAYER_FACING_NORTH, KailoTown_PokemonCenter_2F_EventScript_Doctor
	bg_sign_event 8, 4, 0, BG_EVENT_PLAYER_FACING_NORTH, KailoTown_PokemonCenter_2F_EventScript_Girls
	bg_sign_event 1, 4, 0, BG_EVENT_PLAYER_FACING_NORTH, KailoTown_PokemonCenter_2F_EventScript_Girls
	bg_sign_event 1, 6, 0, BG_EVENT_PLAYER_FACING_SOUTH, KailoTown_PokemonCenter_2F_EventScript_Boys
	bg_sign_event 8, 6, 0, BG_EVENT_PLAYER_FACING_SOUTH, KailoTown_PokemonCenter_2F_EventScript_Boys

KailoTown_PokemonCenter_2F_MapEvents::
	map_events KailoTown_PokemonCenter_2F_ObjectEvents, KailoTown_PokemonCenter_2F_MapWarps, NULL, KailoTown_PokemonCenter_2F_MapBGEvents

