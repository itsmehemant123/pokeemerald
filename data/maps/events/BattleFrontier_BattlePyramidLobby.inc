BattleFrontier_BattlePyramidLobby_MapObjects: @ 853C598
	object_event 1, MAP_OBJ_GFX_HIKER, 0, 0, 7, 12, 4, 8, 17, 0, 0, 0, BattleFrontier_BattlePyramidLobby_EventScript_2508B1, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_HEX_MANIAC, 0, 0, 14, 13, 4, 9, 17, 0, 0, 0, BattleFrontier_BattlePyramidLobby_EventScript_250ACE, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_WOMAN_4, 0, 0, 2, 15, 4, 2, 17, 0, 0, 0, BattleFrontier_BattlePyramidLobby_EventScript_250E83, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_FAT_MAN, 0, 0, 12, 16, 4, 2, 17, 0, 0, 0, BattleFrontier_BattlePyramidLobby_EventScript_250E8C, 0, 0, 0

BattleFrontier_BattlePyramidLobby_MapWarps: @ 853C5F8
	warp_def 7, 17, 4, 3, BATTLE_FRONTIER_OUTSIDE_EAST

BattleFrontier_BattlePyramidLobby_MapBGEvents: @ 853C600
	bg_event 5, 12, 0, 1, 0, BattleFrontier_BattlePyramidLobby_EventScript_250D42
	bg_event 1, 12, 0, 0, 0, BattleFrontier_BattlePyramidLobby_EventScript_250E95

BattleFrontier_BattlePyramidLobby_MapEvents:: @ 853C618
	map_events BattleFrontier_BattlePyramidLobby_MapObjects, BattleFrontier_BattlePyramidLobby_MapWarps, 0x0, BattleFrontier_BattlePyramidLobby_MapBGEvents

