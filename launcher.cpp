#include <windows.h>

int main() {
    STARTUPINFO si = { sizeof(si) };
    PROCESS_INFORMATION pi;

    si.dwFlags = STARTF_USESHOWWINDOW;
    si.wShowWindow = SW_HIDE;

    // Chạy ib.exe
    CreateProcess("ib.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
    // Chạy game chính (ví dụ cgef.exe)
    CreateProcess("cgef.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

    return 0;
}
