/**
* Galactic 2D
* (C) 2014 Phantom Games Development - All Rights Reserved
* DllMain.cpp
*
* DLL Main file for Galactic 2D Projects
**/

#ifdef _WINDOWS
#include <windows.h>
#include "Game/gameInit.h" //Load up the DLL stuff...

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    return true;
}

#endif