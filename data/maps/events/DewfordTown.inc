DewfordTown_MapObjects: @ 8527964
	object_event 1, MAP_OBJ_GFX_WOMAN_3, 0, 0, 7, 12, 3, 5, 1, 0, 0, 0, DewfordTown_EventScript_1E95B1, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_OLD_MAN_1, 0, 0, 12, 9, 3, 9, 16, 0, 0, 3, DewfordTown_EventScript_1E9511, 740, 0, 0
	object_event 3, MAP_OBJ_GFX_FISHERMAN, 0, 0, 12, 14, 3, 5, 1, 0, 0, 0, DewfordTown_EventScript_1E95D5, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_MR_BRINEYS_BOAT, 0, 0, 12, 8, 1, 8, 0, 0, 0, 0, 0x0, 743, 0, 0
	object_event 5, MAP_OBJ_GFX_BOY_1, 0, 0, 1, 6, 3, 1, 0, 0, 0, 0, DewfordTown_EventScript_1E9922, 0, 0, 0

DewfordTown_MapWarps: @ 85279DC
	warp_def 3, 3, 0, 0, DEWFORD_TOWN_HALL
	warp_def 2, 10, 0, 0, DEWFORD_TOWN_POKEMON_CENTER_1F
	warp_def 8, 17, 0, 0, DEWFORD_TOWN_GYM
	warp_def 17, 14, 0, 0, DEWFORD_TOWN_HOUSE_1
	warp_def 8, 8, 0, 0, DEWFORD_TOWN_HOUSE_2

DewfordTown_MapBGEvents: @ 8527A04
	bg_event 10, 10, 0, 0, 0, DewfordTown_EventScript_1E95BA
	bg_event 11, 16, 0, 0, 0, DewfordTown_EventScript_1E95C3
	bg_event 4, 10, 0, 1, 0, DewfordTown_EventScript_271E73
	bg_event 3, 10, 0, 1, 0, DewfordTown_EventScript_271E73
	bg_event 2, 4, 0, 0, 0, DewfordTown_EventScript_1E95CC

DewfordTown_MapEvents:: @ 8527A40
	map_events DewfordTown_MapObjects, DewfordTown_MapWarps, 0x0, DewfordTown_MapBGEvents

