@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/KailoTown_ProfBlackbirdsLab/map.json
@

KailoTown_ProfBlackbirdsLab_MapWarps:
	warp_def 14, 12, 0, 0, MAP_KAILO_TOWN
	warp_def 1, 4, 0, 0, MAP_KAILO_LAB_YARD

KailoTown_ProfBlackbirdsLab_MapBGEvents:
	bg_sign_event 19, 1, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_ProfBlackbirdsLab_MapScripts_Laigen
	bg_sign_event 9, 1, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_ProfBlackbirdsLab_MapScripts_PC
	bg_sign_event 1, 8, 0, BG_EVENT_PLAYER_FACING_ANY, KailoTown_ProfBlackbirdsLab_MapScripts_Mail

KailoTown_ProfBlackbirdsLab_MapEvents::
	map_events NULL, KailoTown_ProfBlackbirdsLab_MapWarps, NULL, KailoTown_ProfBlackbirdsLab_MapBGEvents

