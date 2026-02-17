#include <iostream>

#include "windowfunctions.hpp"

BOOL debug = false;

static int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nShowCmd)
{
	if (debug) {
		AllocConsole();

		FILE* file = nullptr;
		freopen_s(&file, "CONOUT$", "w", stdout);
	}

	while (1) {
		Sleep(500);

		EnumWindows(EnumWindowCallback, NULL);
	}
}

