KailoTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KailoTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

KailoTown_PokemonCenter_1F_OnTransition::
    setrespawn SPAWN_KAILO_TOWN
	end

KailoTown_PokemonCenter_1F_EventScript_Doctor::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse
	release
	end

KailoTown_PokemonCenter_1F_EventScript_Chansey::
  	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox KailoTown_PokemonCenter_1F_Text_Chansey
	waitmoncry
	release
	end

KailoTown_PokemonCenter_1F_EventScript_Dirk::
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_MayIHelpYou
	waitmessage
	pokemart KailoTown_Dirk_Items
	msgbox Text_PleaseComeAgain
	release
	end

KailoTown_PokemonCenter_1F_EventScript_Thomas::
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_MayIHelpYou
	waitmessage
	pokemart KailoTown_Thomas_Items
	msgbox Text_PleaseComeAgain
	release
	end

KailoTown_Dirk_Items::
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE
	release
	end

KailoTown_Thomas_Items::
	.2byte ITEM_POKE_BALL
	.2byte ITEM_NONE
	release
	end
