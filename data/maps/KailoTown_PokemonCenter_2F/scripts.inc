KailoTown_PokemonCenter_2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, KailoTown_PokemonCenter_2F_OnLoad
	.byte 0

KailoTown_PokemonCenter_2F_OnLoad::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, KailoTown_PokemonCenter_2F_RoomsMale
	call_if_eq VAR_RESULT, FEMALE, KailoTown_PokemonCenter_2F_RoomsFemale
	end

KailoTown_PokemonCenter_2F_RoomsMale::
	setmetatile 0, 4, 0x2DE, 1
	setmetatile 7, 4, 0x2DE, 1
	return

KailoTown_PokemonCenter_2F_RoomsFemale::
	setmetatile 0, 6, 0x222, 0
	setmetatile 0, 7, 0x221, 1
	setmetatile 7, 6, 0x222, 0
	setmetatile 7, 7, 0x221, 1
	return

KailoTown_PokemonCenter_2F_EventScript_Doctor::
	msgbox KailoTown_PokemonCenter_2F_Text_Doctor, MSGBOX_SIGN
	end

KailoTown_PokemonCenter_2F_EventScript_Girls::
	msgbox KailoTown_PokemonCenter_2F_Text_Girls, MSGBOX_SIGN
	end

KailoTown_PokemonCenter_2F_EventScript_Boys::
	msgbox KailoTown_PokemonCenter_2F_Text_Boys, MSGBOX_SIGN
	end
