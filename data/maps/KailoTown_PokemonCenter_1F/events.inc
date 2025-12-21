@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/KailoTown_PokemonCenter_1F/map.json
@

KailoTown_PokemonCenter_1F_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_NURSE, 4, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, KailoTown_PokemonCenter_1F_EventScript_Doctor, 0
	object_event 2, OBJ_EVENT_GFX_CLERK, 8, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, KailoTown_PokemonCenter_1F_EventScript_Dirk, 0
	object_event 3, OBJ_EVENT_GFX_CLERK, 10, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, KailoTown_PokemonCenter_1F_EventScript_Thomas, 0
	object_event 4, OBJ_EVENT_GFX_CHANSEY, 5, 2, 0, MOVEMENT_TYPE_FACE_DOWN, 0, 0, TRAINER_TYPE_NONE, 0, KailoTown_PokemonCenter_1F_EventScript_Chansey, 0

KailoTown_PokemonCenter_1F_MapWarps:
	warp_def 4, 8, 0, 2, MAP_KAILO_TOWN
	warp_def 13, 7, 0, 0, MAP_KAILO_TOWN_POKEMON_CENTER_2F

KailoTown_PokemonCenter_1F_MapEvents::
	map_events KailoTown_PokemonCenter_1F_ObjectEvents, KailoTown_PokemonCenter_1F_MapWarps, NULL, NULL

