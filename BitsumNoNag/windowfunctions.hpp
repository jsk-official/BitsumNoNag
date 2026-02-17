#include <Windows.h>

static BOOL CALLBACK EnumWindowCallback(HWND hWnd, LPARAM lparam) {
    int length = GetWindowTextLength(hWnd);
    char* buffer = new char[length + 1];
    GetWindowTextA(hWnd, buffer, length + 1);

    if (IsWindowVisible(hWnd) && length != 0 && strcmp(buffer, "Process Lasso") == 0) {
        LONG_PTR styles = GetWindowLongPtr(hWnd, GWL_STYLE);

        if (styles == 0x94c80ac6) { // validate this is the nag window via its style, it has no maximize, minimize button etc
            std::cout << SendMessage(hWnd, WM_NCDESTROY, NULL, NULL) << std::endl; // we cannot use DestroyWindow as a thread cannot use DestroyWindow to destroy a window created by a different thread.
        }
    }

    delete[] buffer;

    return TRUE;
}