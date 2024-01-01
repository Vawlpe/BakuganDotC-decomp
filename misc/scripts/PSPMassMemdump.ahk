#Requires AutoHotkey v2.0
#SingleInstance Force
#n::
{

	CoordMode "Mouse", "Window"
	game_win    := "PPSSPP v1.16.6 - ULUS10536 : Bakugan™: Defenders of the Core"
	memview_win := "Memory Viewer - R4"
	memdump_win := "Dump memory"
	memdone_win := "Information"
	save_path := "C:\Users\cringe\Documents\PPSSPP\PSP\SYSTEM\DUMP\B\"

	WinWait game_win
	WinWait memview_win
	idx := 1
	loop 400
	{
		WinActivate memview_win
		WinWaitActive memview_win
		MouseMove 250,250
		Click "Right"
		Send "{Up}+{Enter}"

		WinWait memdump_win
		WinActivate memdump_win
		WinWaitActive memdump_win
		Send save_path
		Send idx 
		Send "{Raw}.dump"
		Send "{Enter}"
		
		WinWait memdone_win
		WinActivate memdone_win
		WinWaitActive memdone_win
		Send "{Enter}"
		
		WinWaitActive memview_win
		WinActivate game_win
		WinWaitActive game_win
		Send "{.}"
		
		idx := idx + 1
	}
}
