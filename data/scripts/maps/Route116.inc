Route116_MapScripts:: @ 81F2C0C
	map_script 3, Route116_MapScript1_1F2C1C
	map_script 1, Route116_MapScript1_1F2C4F
	map_script 2, Route116_MapScript2_1F2C66
	.byte 0

Route116_MapScript1_1F2C1C: @ 81F2C1C
	checkflag FLAG_0x08F
	call_if 1, Route116_EventScript_1F2C47
	compare VAR_0x4039, 1
	call_if 1, Route116_EventScript_273D13
	compare VAR_0x4037, 5
	call_if 1, Route116_EventScript_273D1B
	compare VAR_0x4037, 6
	call_if 1, Route116_EventScript_273D1B
	end

Route116_EventScript_1F2C47:: @ 81F2C47
	setobjectxyperm 21, 38, 10
	return

Route116_MapScript1_1F2C4F: @ 81F2C4F
	compare VAR_0x4037, 5
	call_if 1, Route116_EventScript_27395F
	compare VAR_0x4037, 6
	call_if 1, Route116_EventScript_273972
	end

Route116_MapScript2_1F2C66: @ 81F2C66
	map_script_2 VAR_0x4039, 1, gUnknown_08273D1F
	.2byte 0

Route116_EventScript_1F2C70:: @ 81F2C70
	lock
	faceplayer
	checkflag FLAG_0x08F
	goto_eq Route116_EventScript_1F2C8E
	checkflag FLAG_0x08E
	goto_eq Route116_EventScript_1F2C98
	msgbox Route116_Text_1F3140, 4
	release
	end

Route116_EventScript_1F2C8E:: @ 81F2C8E
	msgbox Route116_Text_1F32C1, 4
	release
	end

Route116_EventScript_1F2C98:: @ 81F2C98
	msgbox Route116_Text_1F3166, 4
	release
	end

Route116_EventScript_1F2CA2:: @ 81F2CA2
	lock
	faceplayer
	checkflag FLAG_0x11F
	goto_eq Route116_EventScript_1F2D2B
	msgbox Route116_Text_1F3317, 4
	goto Route116_EventScript_1F2CBB
	end

Route116_EventScript_1F2CBB:: @ 81F2CBB
	setflag FLAG_0x11F
	giveitem_std ITEM_REPEAT_BALL
	compare VAR_RESULT, 0
	goto_eq Route116_EventScript_1F2D39
	msgbox Route116_Text_1F3521, 4
	closemessage
	compare VAR_FACING, 2
	call_if 1, Route116_EventScript_1F2D15
	compare VAR_FACING, 1
	call_if 1, Route116_EventScript_1F2D15
	compare VAR_FACING, 3
	call_if 1, Route116_EventScript_1F2D15
	compare VAR_FACING, 4
	call_if 1, Route116_EventScript_1F2D20
	removeobject VAR_LAST_TALKED
	clearflag FLAG_0x3B5
	setflag FLAG_0x100
	release
	end

Route116_EventScript_1F2D15:: @ 81F2D15
	applymovement VAR_LAST_TALKED, Route116_Movement_1F2D43
	waitmovement 0
	return

Route116_EventScript_1F2D20:: @ 81F2D20
	applymovement VAR_LAST_TALKED, Route116_Movement_1F2D4C
	waitmovement 0
	return

Route116_EventScript_1F2D2B:: @ 81F2D2B
	msgbox Route116_Text_1F35CE, 4
	goto Route116_EventScript_1F2CBB
	end

Route116_EventScript_1F2D39:: @ 81F2D39
	msgbox Route116_Text_1F3593, 4
	release
	end

Route116_Movement_1F2D43: @ 81F2D43
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_end

Route116_Movement_1F2D4C: @ 81F2D4C
	step_down
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_end

Route116_EventScript_1F2D57:: @ 81F2D57
	msgbox Route116_Text_1F379D, 3
	end

Route116_EventScript_1F2D60:: @ 81F2D60
	msgbox Route116_Text_1F37B7, 3
	end

Route116_EventScript_1F2D69:: @ 81F2D69
	msgbox Route116_Text_1F380F, 3
	end

Route116_EventScript_1F2D72:: @ 81F2D72
	msgbox Route116_Text_1F3825, 3
	end

Route116_EventScript_1F2D7B:: @ 81F2D7B
	msgbox Route116_Text_1F38D4, 3
	end

Route116_EventScript_1F2D84:: @ 81F2D84
	lock
	faceplayer
	msgbox Route116_Text_1F309D, 4
	setvar VAR_0x406F, 2
	release
	end

Route116_EventScript_1F2D95:: @ 81F2D95
	lockall
	applymovement 11, Route116_Movement_2725A8
	applymovement 255, Route116_Movement_2725A4
	waitmovement 0
	msgbox Route116_Text_1F309D, 4
	setvar VAR_0x406F, 2
	releaseall
	end

Route116_EventScript_1F2DB6:: @ 81F2DB6
	lock
	faceplayer
	checkitem ITEM_BLACK_GLASSES, 1
	compare VAR_RESULT, 1
	goto_eq Route116_EventScript_1F2DF1
	specialvar VAR_RESULT, sub_8139634
	compare VAR_RESULT, 1
	goto_eq Route116_EventScript_1F2DE2
	msgbox Route116_Text_1F3657, 4
	release
	end

Route116_EventScript_1F2DE2:: @ 81F2DE2
	msgbox Route116_Text_1F3718, 4
	closemessage
	goto Route116_EventScript_1F2E2A
	end

Route116_EventScript_1F2DF1:: @ 81F2DF1
	msgbox Route116_Text_1F3657, 4
	msgbox Route116_Text_1F3688, 4
	specialvar VAR_RESULT, sub_8139634
	compare VAR_RESULT, 1
	goto_eq Route116_EventScript_1F2E1B
	msgbox Route116_Text_1F375E, 4
	release
	end

Route116_EventScript_1F2E1B:: @ 81F2E1B
	msgbox Route116_Text_1F36B4, 4
	closemessage
	goto Route116_EventScript_1F2E2A
	end

Route116_EventScript_1F2E2A:: @ 81F2E2A
	delay 20
	compare VAR_FACING, 2
	call_if 1, Route116_EventScript_1F2E5E
	compare VAR_FACING, 1
	call_if 1, Route116_EventScript_1F2E5E
	compare VAR_FACING, 3
	call_if 1, Route116_EventScript_1F2E5E
	compare VAR_FACING, 4
	call_if 1, Route116_EventScript_1F2E69
	removeobject VAR_LAST_TALKED
	release
	end

Route116_EventScript_1F2E5E:: @ 81F2E5E
	applymovement VAR_LAST_TALKED, Route116_Movement_1F2E74
	waitmovement 0
	return

Route116_EventScript_1F2E69:: @ 81F2E69
	applymovement VAR_LAST_TALKED, Route116_Movement_1F2E7E
	waitmovement 0
	return

Route116_Movement_1F2E74: @ 81F2E74
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_end

Route116_Movement_1F2E7E: @ 81F2E7E
	step_up
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_end

Route116_EventScript_1F2E89:: @ 81F2E89
	trainerbattle 0, TRAINER_JOEY, 0, Route116_Text_29BB79, Route116_Text_29BB9A
	msgbox Route116_Text_29BBC6, 6
	end

Route116_EventScript_1F2EA0:: @ 81F2EA0
	trainerbattle 0, TRAINER_JOSE, 0, Route116_Text_29BBFD, Route116_Text_29BC25
	msgbox Route116_Text_29BC42, 6
	end

Route116_EventScript_1F2EB7:: @ 81F2EB7
	trainerbattle 2, TRAINER_JERRY_1, 0, Route116_Text_29BD0C, Route116_Text_29BD66, Route116_EventScript_1F2EF8
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_eq Route116_EventScript_1F2F4E
	setvar VAR_0x8004, 273
	specialvar VAR_RESULT, sub_813B4E0
	compare VAR_RESULT, 0
	goto_eq Route116_EventScript_1F2F22
	msgbox Route116_Text_29BD92, 4
	release
	end

Route116_EventScript_1F2EF8:: @ 81F2EF8
	checkflag FLAG_HAS_MATCH_CALL
	goto_eq Route116_EventScript_1F2F03
	release
	end

Route116_EventScript_1F2F03:: @ 81F2F03
	special sub_80B4808
	waitmovement 0
	msgbox Route116_Text_29BE71, 4
	setvar VAR_0x8004, 273
	special sub_81D1C20
	setorcopyvar VAR_0x8000, 273
	callstd 8
	release
	end

Route116_EventScript_1F2F22:: @ 81F2F22
	checkflag FLAG_HAS_MATCH_CALL
	goto_eq Route116_EventScript_1F2F35
	msgbox Route116_Text_29BD92, 4
	release
	end

Route116_EventScript_1F2F35:: @ 81F2F35
	msgbox Route116_Text_29BDEF, 4
	setvar VAR_0x8004, 273
	special sub_81D1C20
	setorcopyvar VAR_0x8000, 273
	callstd 8
	release
	end

Route116_EventScript_1F2F4E:: @ 81F2F4E
	trainerbattle 5, TRAINER_JERRY_1, 0, Route116_Text_29BEF3, Route116_Text_29BF4C
	msgbox Route116_Text_29BF68, 6
	end

Route116_EventScript_1F2F65:: @ 81F2F65
	trainerbattle 0, TRAINER_CLARK, 0, Route116_Text_29BACD, Route116_Text_29BB0F
	msgbox Route116_Text_29BB31, 6
	end

Route116_EventScript_1F2F7C:: @ 81F2F7C
	trainerbattle 0, TRAINER_JANICE, 0, Route116_Text_29BC7F, Route116_Text_29BCB3
	msgbox Route116_Text_29BCCC, 6
	end

Route116_EventScript_1F2F93:: @ 81F2F93
	trainerbattle 2, TRAINER_KAREN_1, 0, Route116_Text_29BFC5, Route116_Text_29BFFA, Route116_EventScript_1F2FD4
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_eq Route116_EventScript_1F302A
	setvar VAR_0x8004, 280
	specialvar VAR_RESULT, sub_813B4E0
	compare VAR_RESULT, 0
	goto_eq Route116_EventScript_1F2FFE
	msgbox Route116_Text_29C010, 4
	release
	end

Route116_EventScript_1F2FD4:: @ 81F2FD4
	checkflag FLAG_HAS_MATCH_CALL
	goto_eq Route116_EventScript_1F2FDF
	release
	end

Route116_EventScript_1F2FDF:: @ 81F2FDF
	special sub_80B4808
	waitmovement 0
	msgbox Route116_Text_29C096, 4
	setvar VAR_0x8004, 280
	special sub_81D1C20
	setorcopyvar VAR_0x8000, 280
	callstd 8
	release
	end

Route116_EventScript_1F2FFE:: @ 81F2FFE
	checkflag FLAG_HAS_MATCH_CALL
	goto_eq Route116_EventScript_1F3011
	msgbox Route116_Text_29C010, 4
	release
	end

Route116_EventScript_1F3011:: @ 81F3011
	msgbox Route116_Text_29C052, 4
	setvar VAR_0x8004, 280
	special sub_81D1C20
	setorcopyvar VAR_0x8000, 280
	callstd 8
	release
	end

Route116_EventScript_1F302A:: @ 81F302A
	trainerbattle 5, TRAINER_KAREN_1, 0, Route116_Text_29C0DA, Route116_Text_29C11F
	msgbox Route116_Text_29C13B, 6
	end

Route116_EventScript_1F3041:: @ 81F3041
	trainerbattle 0, TRAINER_SARAH, 0, Route116_Text_29C173, Route116_Text_29C1B8
	msgbox Route116_Text_29C1EA, 6
	end

Route116_EventScript_1F3058:: @ 81F3058
	trainerbattle 0, TRAINER_DAWSON, 0, Route116_Text_29C266, Route116_Text_29C2C2
	msgbox Route116_Text_29C2DD, 6
	end

Route116_EventScript_1F306F:: @ 81F306F
	trainerbattle 0, TRAINER_DEVAN, 0, Route116_Text_29C350, Route116_Text_29C365
	msgbox Route116_Text_29C380, 6
	end

Route116_EventScript_1F3086:: @ 81F3086
	trainerbattle 0, TRAINER_JOHNSON, 0, Route116_Text_29C3C1, Route116_Text_29C3F7
	msgbox Route116_Text_29C418, 6
	end

Route116_Text_1F309D: @ 81F309D
	.string "Ohhh, what am I to do?\p"
	.string "We were on our walk, PEEKO and I, when\n"
	.string "we were jumped by an odd thug…\p"
	.string "The scoundrel made off with my\n"
	.string "darling PEEKO!\p"
	.string "Wrrrooooooaaaar! PEEKO!$"

Route116_Text_1F3140: @ 81F3140
	.string "Nnn… Roar!\p"
	.string "I want to dig that tunnel!$"

Route116_Text_1F3166: @ 81F3166
	.string "Nnn… Roar!\n"
	.string "What’s going on?\p"
	.string "I was digging the tunnel without any\n"
	.string "tools when some goon ordered me out!\p"
	.string "That tunnel’s filled with POKéMON\n"
	.string "that react badly to loud noises.\l"
	.string "They could cause an uproar.\p"
	.string "That’s why we stopped using heavy\n"
	.string "equipment for tunneling…\p"
	.string "I’m worried that the goon will do\n"
	.string "something stupid and startle the\l"
	.string "POKéMON into an uproar.$"

Route116_Text_1F32C1: @ 81F32C1
	.string "Nnn… Roar!\p"
	.string "That goofy goon hightailed it out of\n"
	.string "the tunnel! I can go back to digging!$"

Route116_Text_1F3317: @ 81F3317
	.string "Oh! It’s you!\p"
	.string "You’re that person who not only helped\n"
	.string "me in PETALBURG WOODS, but also got\l"
	.string "back my stolen package and then even\l"
	.string "graciously delivered it to SLATEPORT!\p"
	.string "CAPT. STERN informed us that the\n"
	.string "package arrived, too!\p"
	.string "I thank you very, very much!\p"
	.string "Why, if I were a rain cloud, I would\n"
	.string "shower you with gratitude and hail\l"
	.string "you as a hero!\p"
	.string "For you, the most wonderful TRAINER,\n"
	.string "I bear good news!\p"
	.string "Recently, our company developed\n"
	.string "a new kind of POKé BALL.\p"
	.string "As a token of our appreciation, this\n"
	.string "is our gift to our wonderful TRAINER!$"

Route116_Text_1F3521: @ 81F3521
	.string "Our new POKé BALL will be available\n"
	.string "at the POKéMON MART in RUSTBORO.\p"
	.string "Please do try it out!\n"
	.string "Thank you and bye-bye!$"

Route116_Text_1F3593: @ 81F3593
	.string "Your BAG is jam-packed.\n"
	.string "I can’t give you this REPEAT BALL.$"

Route116_Text_1F35CE: @ 81F35CE
	.string "As a token of our appreciation for\n"
	.string "your delivering our package, I have\l"
	.string "a gift of a new kind of POKé BALL\l"
	.string "for our most wonderful TRAINER!$"

Route116_Text_1F3657: @ 81F3657
	.string "I dropped my glasses…\n"
	.string "Can you help me find them?$"

Route116_Text_1F3688: @ 81F3688
	.string "Those glasses!\n"
	.string "May I see them for a second?$"

Route116_Text_1F36B4: @ 81F36B4
	.string "Hmm…\n"
	.string "These are BLACKGLASSES.\l"
	.string "They’re not what I’m looking for…\p"
	.string "Maybe my glasses aren’t around\n"
	.string "here…$"

Route116_Text_1F3718: @ 81F3718
	.string "Hmm…\n"
	.string "I can’t find my glasses anywhere…\l"
	.string "Maybe they’re not around here…$"

Route116_Text_1F375E: @ 81F375E
	.string "Hmm…\n"
	.string "These are BLACKGLASSES.\l"
	.string "They’re not what I’m looking for…$"

Route116_Text_1F379D: @ 81F379D
	.string "ROUTE 116\n"
	.string "{0x7B} RUSTBORO CITY$"

Route116_Text_1F37B7: @ 81F37B7
	.string "RUSTURF TUNNEL\n"
	.string "“Linking RUSTBORO and VERDANTURF\p"
	.string "“The tunnel project has been\n"
	.string "canceled.”$"

Route116_Text_1F380F: @ 81F380F
	.string "TUNNELER’S REST HOUSE$"

Route116_Text_1F3825: @ 81F3825
	.string "TRAINER TIPS\p"
	.string "If you want to stop a POKéMON from\n"
	.string "evolving, press the B Button while it\l"
	.string "is trying to evolve.\l"
	.string "The startled POKéMON will stop.\p"
	.string "This is called an evolution cancel.$"

Route116_Text_1F38D4: @ 81F38D4
	.string "TRAINER TIPS\p"
	.string "Your BAG has several POCKETS.\p"
	.string "Items you obtain are automatically\n"
	.string "placed in the appropriate POCKETS.\p"
	.string "No TRAINER can afford to be without\n"
	.string "a BAG of their own.$"

