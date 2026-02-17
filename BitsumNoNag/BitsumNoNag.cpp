#include <iostream>

#include "windowfunctions.hpp"

BOOL debug = false;

int main()
{
	if (!debug) {
		FreeConsole();
	}

	while (1) {
		Sleep(500);

		EnumWindows(EnumWindowCallback, NULL);
	}
}