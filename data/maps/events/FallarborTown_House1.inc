FallarborTown_House1_MapObjects: @ 852E5B8
	object_event 1, MAP_OBJ_GFX_SCIENTIST_1, 0, 0, 6, 4, 3, 2, 17, 0, 0, 0, FallarborTown_House1_EventScript_200F13, 928, 0, 0
	object_event 2, MAP_OBJ_GFX_WOMAN_3, 0, 0, 5, 6, 3, 5, 1, 0, 0, 0, FallarborTown_House1_EventScript_200FBC, 0, 0, 0

FallarborTown_House1_MapWarps: @ 852E5E8
	warp_def 3, 8, 0, 3, FALLARBOR_TOWN
	warp_def 4, 8, 0, 3, FALLARBOR_TOWN

FallarborTown_House1_MapEvents:: @ 852E5F8
	map_events FallarborTown_House1_MapObjects, FallarborTown_House1_MapWarps, 0x0, 0x0

