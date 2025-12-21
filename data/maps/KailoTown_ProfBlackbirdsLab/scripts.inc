KailoTown_ProfBlackbirdsLab_MapScripts::
	.byte 0

KailoTown_ProfBlackbirdsLab_MapScripts_Laigen::
  lock
  msgbox KailoTown_ProfBlackbirdsLab_Text_Laigen
  closemessage
  release
  end

KailoTown_ProfBlackbirdsLab_MapScripts_Mail::
  lock
  msgbox KailoTown_ProfBlackbirdsLab_Text_Mail
  closemessage
  release
  end

KailoTown_ProfBlackbirdsLab_MapScripts_PC::
  lock
  msgbox KailoTown_ProfBlackbirdsLab_Text_PC, MSGBOX_YESNO
  goto_if_eq VAR_RESULT, YES, KailoTown_ProfBlackbirdsLab_MapScripts_PCYes
  msgbox KailoTown_ProfBlackbirdsLab_Text_PCNo
  closemessage
  release
  end

KailoTown_ProfBlackbirdsLab_MapScripts_PCYes::
  msgbox KailoTown_ProfBlackbirdsLab_Text_PCYes
  closemessage
  release
  end
