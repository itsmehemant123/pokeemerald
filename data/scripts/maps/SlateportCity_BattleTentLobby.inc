SlateportCity_BattleTentLobby_MapScripts:: @ 8208730
	map_script 2, SlateportCity_BattleTentLobby_MapScript2_20874F
	map_script 4, SlateportCity_BattleTentLobby_MapScript2_20873B
	.byte 0

SlateportCity_BattleTentLobby_MapScript2_20873B: @ 820873B
	map_script_2 VAR_0x4001, 0, SlateportCity_BattleTentLobby_EventScript_208745
	.2byte 0

SlateportCity_BattleTentLobby_EventScript_208745:: @ 8208745
	setvar VAR_0x4001, 1
	turnobject 255, 2
	end

SlateportCity_BattleTentLobby_MapScript2_20874F: @ 820874F
	map_script_2 VAR_0x4000, 0, SlateportCity_BattleTentLobby_EventScript_208779
	map_script_2 VAR_0x4000, 1, SlateportCity_BattleTentLobby_EventScript_208782
	map_script_2 VAR_0x4000, 2, SlateportCity_BattleTentLobby_EventScript_208871
	map_script_2 VAR_0x4000, 3, SlateportCity_BattleTentLobby_EventScript_2087B7
	map_script_2 VAR_0x4000, 4, SlateportCity_BattleTentLobby_EventScript_208837
	.2byte 0

SlateportCity_BattleTentLobby_EventScript_208779:: @ 8208779
	setvar VAR_0x8004, 0
	special sub_81A1780
	end

SlateportCity_BattleTentLobby_EventScript_208782:: @ 8208782
	lockall
	msgbox SlateportCity_BattleTentLobby_Text_2C5DFA, 4
	closemessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special sub_81A1780
	setvar VAR_0x4000, 255
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 0
	special sub_81A1780
	releaseall
	end

SlateportCity_BattleTentLobby_EventScript_2087B7:: @ 82087B7
	lockall
	message SlateportCity_BattleTentLobby_Text_2C5C6F
	waitmessage
	setvar VAR_0x8004, 4
	special sub_81B9D08
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 0
	special sub_81A1780
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 0
	special sub_81B9D08
	playse SE_SAVE
	waitse

SlateportCity_BattleTentLobby_EventScript_2087E9:: @ 82087E9
	msgbox SlateportCity_BattleTentLobby_Text_2C5D14, 4
	setvar VAR_0x8004, 5
	special sub_81B9D08
	switch VAR_RESULT
	case 0, SlateportCity_BattleTentLobby_EventScript_20882A
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special sub_81A1780
	message SlateportCity_BattleTentLobby_Text_23F68C
	waitmessage
	playfanfare MUS_FANFA4
	waitfanfare
	goto SlateportCity_BattleTentLobby_EventScript_208861

SlateportCity_BattleTentLobby_EventScript_20882A:: @ 820882A
	msgbox SlateportCity_BattleTentLobby_Text_2C5D52, 4
	goto SlateportCity_BattleTentLobby_EventScript_208861

SlateportCity_BattleTentLobby_EventScript_208837:: @ 8208837
	lockall
	message SlateportCity_BattleTentLobby_Text_2C5BA2
	waitmessage
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 0
	special sub_81A1780
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 0
	special sub_81B9D08
	playse SE_SAVE
	waitse

SlateportCity_BattleTentLobby_EventScript_208861:: @ 8208861
	msgbox SlateportCity_BattleTentLobby_Text_2C5AA5, 4
	closemessage
	setvar VAR_0x4000, 255
	releaseall
	end

SlateportCity_BattleTentLobby_EventScript_208871:: @ 8208871
	lockall
	message SlateportCity_BattleTentLobby_Text_2C5DA7
	waitmessage
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 1
	special sub_81B9D08
	playse SE_SAVE
	waitse
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 0
	special sub_81A1780
	setvar VAR_0x4000, 255
	setvar VAR_0x8006, 2
	goto SlateportCity_BattleTentLobby_EventScript_2089AC

SlateportCity_BattleTentLobby_EventScript_2088AA:: @ 82088AA
	lock
	faceplayer
	setvar VAR_0x8004, 1
	special sub_81B9D08
	compare VAR_RESULT, 0
	goto_if 5, SlateportCity_BattleTentLobby_EventScript_2087E9
	special copy_player_party_to_sav1
	msgbox SlateportCity_BattleTentLobby_Text_2C5810, 4

SlateportCity_BattleTentLobby_EventScript_2088CA:: @ 82088CA
	message SlateportCity_BattleTentLobby_Text_2C586A
	waitmessage
	multichoice 17, 6, 23, 0
	switch VAR_RESULT
	case 0, SlateportCity_BattleTentLobby_EventScript_208906
	case 1, SlateportCity_BattleTentLobby_EventScript_208A07
	case 2, SlateportCity_BattleTentLobby_EventScript_208A2E
	case 127, SlateportCity_BattleTentLobby_EventScript_208A2E

SlateportCity_BattleTentLobby_EventScript_208906:: @ 8208906
	setvar VAR_FRONTIER_FACILITY, 4
	setvar VAR_0x40CE, 0
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 2
	special sub_81A1780
	msgbox SlateportCity_BattleTentLobby_Text_2C5B06, 5
	switch VAR_RESULT
	case 0, SlateportCity_BattleTentLobby_EventScript_208A2B
	case 1, SlateportCity_BattleTentLobby_EventScript_208950
	case 127, SlateportCity_BattleTentLobby_EventScript_208A2B

SlateportCity_BattleTentLobby_EventScript_208950:: @ 8208950
	setvar VAR_0x4000, 0
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 4
	special sub_81A1780
	setvar VAR_0x8004, 0
	special sub_81B9D08
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 1
	special sub_81A1780
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 0
	special sub_81A1780
	closemessage
	delay 2
	call SlateportCity_BattleTentLobby_EventScript_27134F
	setvar VAR_0x4000, 255
	compare VAR_RESULT, 0
	goto_eq SlateportCity_BattleTentLobby_EventScript_208A14
	setvar VAR_0x8006, 0

SlateportCity_BattleTentLobby_EventScript_2089AC:: @ 82089AC
	msgbox SlateportCity_BattleTentLobby_Text_2C5B8C, 4
	closemessage
	call SlateportCity_BattleTentLobby_EventScript_2089C9
	warp SLATEPORT_CITY_BATTLE_TENT_CORRIDOR, 255, 2, 7
	setvar VAR_0x4000, 0
	waitstate
	end

SlateportCity_BattleTentLobby_EventScript_2089C9:: @ 82089C9
	applymovement 1, SlateportCity_BattleTentLobby_Movement_2089F8
	applymovement 255, SlateportCity_BattleTentLobby_Movement_2089FF
	waitmovement 0
	opendoor 6, 1
	waitdooranim
	applymovement 1, SlateportCity_BattleTentLobby_Movement_2089FC
	applymovement 255, SlateportCity_BattleTentLobby_Movement_208A03
	waitmovement 0
	closedoor 6, 1
	waitdooranim
	return

SlateportCity_BattleTentLobby_Movement_2089F8: @ 82089F8
	step_up
	step_up
	step_up
	step_end

SlateportCity_BattleTentLobby_Movement_2089FC: @ 82089FC
	step_up
	step_54
	step_end

SlateportCity_BattleTentLobby_Movement_2089FF: @ 82089FF
	step_up
	step_up
	step_up
	step_end

SlateportCity_BattleTentLobby_Movement_208A03: @ 8208A03
	step_up
	step_up
	step_54
	step_end

SlateportCity_BattleTentLobby_EventScript_208A07:: @ 8208A07
	msgbox SlateportCity_BattleTentLobby_Text_2C589C, 4
	goto SlateportCity_BattleTentLobby_EventScript_2088CA

SlateportCity_BattleTentLobby_EventScript_208A14:: @ 8208A14
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special sub_81A1780
	goto SlateportCity_BattleTentLobby_EventScript_208A2E

SlateportCity_BattleTentLobby_EventScript_208A2B:: @ 8208A2B
	special copy_player_party_from_sav1

SlateportCity_BattleTentLobby_EventScript_208A2E:: @ 8208A2E
	msgbox SlateportCity_BattleTentLobby_Text_2C5AA5, 4
	release
	end

SlateportCity_BattleTentLobby_Movement_208A38:: @ 8208A38
	step_up
	step_up
	step_up
	step_54
	step_end

SlateportCity_BattleTentLobby_EventScript_208A3D:: @ 8208A3D
	lock
	faceplayer
	checkflag FLAG_0x109
	goto_eq SlateportCity_BattleTentLobby_EventScript_208A74
	msgbox SlateportCity_BattleTentLobby_Text_208B4E, 4
	giveitem_std ITEM_TM41
	compare VAR_RESULT, 0
	goto_eq SlateportCity_BattleTentLobby_EventScript_272054
	setflag FLAG_0x109
	msgbox SlateportCity_BattleTentLobby_Text_208C5C, 4
	release
	end

SlateportCity_BattleTentLobby_EventScript_208A74:: @ 8208A74
	msgbox SlateportCity_BattleTentLobby_Text_208C5C, 4
	release
	end

SlateportCity_BattleTentLobby_EventScript_208A7E:: @ 8208A7E
	msgbox SlateportCity_BattleTentLobby_Text_208D27, 2
	end

SlateportCity_BattleTentLobby_EventScript_208A87:: @ 8208A87
	msgbox SlateportCity_BattleTentLobby_Text_208DA6, 2
	end

SlateportCity_BattleTentLobby_EventScript_208A90:: @ 8208A90
	msgbox SlateportCity_BattleTentLobby_Text_208DF1, 2
	end

SlateportCity_BattleTentLobby_EventScript_208A99:: @ 8208A99
	lockall
	msgbox SlateportCity_BattleTentLobby_Text_259721, 4
	goto SlateportCity_BattleTentLobby_EventScript_208AA8
	end

SlateportCity_BattleTentLobby_EventScript_208AA8:: @ 8208AA8
	message SlateportCity_BattleTentLobby_Text_259743
	waitmessage
	multichoice 17, 0, 111, 0
	switch VAR_RESULT
	case 0, SlateportCity_BattleTentLobby_EventScript_208B06
	case 1, SlateportCity_BattleTentLobby_EventScript_208B14
	case 2, SlateportCity_BattleTentLobby_EventScript_208B22
	case 3, SlateportCity_BattleTentLobby_EventScript_208B30
	case 4, SlateportCity_BattleTentLobby_EventScript_208B3E
	case 5, SlateportCity_BattleTentLobby_EventScript_208B4C
	case 127, SlateportCity_BattleTentLobby_EventScript_208B4C
	end

SlateportCity_BattleTentLobby_EventScript_208B06:: @ 8208B06
	msgbox SlateportCity_BattleTentLobby_Text_2C5F08, 4
	goto SlateportCity_BattleTentLobby_EventScript_208AA8
	end

SlateportCity_BattleTentLobby_EventScript_208B14:: @ 8208B14
	msgbox SlateportCity_BattleTentLobby_Text_2C5F9D, 4
	goto SlateportCity_BattleTentLobby_EventScript_208AA8
	end

SlateportCity_BattleTentLobby_EventScript_208B22:: @ 8208B22
	msgbox SlateportCity_BattleTentLobby_Text_2C6020, 4
	goto SlateportCity_BattleTentLobby_EventScript_208AA8
	end

SlateportCity_BattleTentLobby_EventScript_208B30:: @ 8208B30
	msgbox SlateportCity_BattleTentLobby_Text_2C60C0, 4
	goto SlateportCity_BattleTentLobby_EventScript_208AA8
	end

SlateportCity_BattleTentLobby_EventScript_208B3E:: @ 8208B3E
	msgbox SlateportCity_BattleTentLobby_Text_2C61FE, 4
	goto SlateportCity_BattleTentLobby_EventScript_208AA8
	end

SlateportCity_BattleTentLobby_EventScript_208B4C:: @ 8208B4C
	releaseall
	end

SlateportCity_BattleTentLobby_Text_208B4E: @ 8208B4E
	.string "So, like, I couldn’t find myself any\n"
	.string "POKéMON that were, like, for me.\p"
	.string "So, I figured, like, hey, I should file\n"
	.string "a complaint to the guy there?\p"
	.string "And he wouldn’t hear me out, like, hey!\n"
	.string "So, like, total bummer, man!\p"
	.string "Hey, like, you! Zip it, you know?\n"
	.string "Just, you know, take this!$"

SlateportCity_BattleTentLobby_Text_208C5C: @ 8208C5C
	.string "That’s, like, TM41, you know?\n"
	.string "Hey, it’s TORMENT, you hearing me?\p"
	.string "Like, it won’t let the other guy\n"
	.string "use the same move twice in a row, see?\p"
	.string "Hey, now, you listen here, like,\n"
	.string "I’m not laying a torment on you!$"

SlateportCity_BattleTentLobby_Text_208D27: @ 8208D27
	.string "I don’t really like BUG POKéMON,\n"
	.string "but maybe I’ll try using some for\l"
	.string "a change of pace.\p"
	.string "Who knows, I might even get to like\n"
	.string "them!$"

SlateportCity_BattleTentLobby_Text_208DA6: @ 8208DA6
	.string "You can battle all you want here even\n"
	.string "if you don’t have any tough POKéMON.$"

SlateportCity_BattleTentLobby_Text_208DF1: @ 8208DF1
	.string "Wouldn’t it be nice if they had more of\n"
	.string "a selection?$"

