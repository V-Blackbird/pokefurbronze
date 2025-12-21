@
@ DO NOT MODIFY THIS FILE! It is auto-generated from data/maps/Route25/map.json
@

Route25_ObjectEvents:
	object_event 1, OBJ_EVENT_GFX_ITEM_BALL, 26, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, Route25_EventScript_ItemTM43, FLAG_HIDE_ROUTE25_TM43

Route25_MapWarps:
	warp_def 51, 0, 0, 1, MAP_ROUTE25_SEA_COTTAGE

Route25_MapBGEvents:
	bg_sign_event 48, 4, 0, BG_EVENT_PLAYER_FACING_ANY, Route25_EventScript_SeaCottageSign
	bg_hidden_item_event 14, 2, 3, ITEM_ELIXIR, FLAG_HIDDEN_ITEM_ROUTE25_ELIXIR, 1, FALSE
	bg_hidden_item_event 58, 6, 3, ITEM_ETHER, FLAG_HIDDEN_ITEM_ROUTE25_ETHER, 1, FALSE
	bg_hidden_item_event 33, 8, 3, ITEM_ORAN_BERRY, FLAG_HIDDEN_ITEM_ROUTE25_ORAN_BERRY, 1, FALSE
	bg_hidden_item_event 40, 3, 3, ITEM_BLUK_BERRY, FLAG_HIDDEN_ITEM_ROUTE25_BLUK_BERRY, 1, FALSE
	bg_sign_event 51, 4, 0, BG_EVENT_PLAYER_FACING_ANY, Route25_EventScript_SeaCottageSign2

Route25_MapEvents::
	map_events Route25_ObjectEvents, Route25_MapWarps, NULL, Route25_MapBGEvents

