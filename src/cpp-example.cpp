#define NOMINMAX
#include <windows.h>
#include <iostream>
#include "auth/auth.hpp"

#pragma comment(lib, "winhttp.lib")

static std::string app_id = ""; // your application id here

int main()
{
    if (!auth->initialize(app_id))
    {
        MessageBoxA
        (
            nullptr,
            "Failed to initialize authentication.\n\n"
            "Server is down or config is wrong, Try again later.",
            "SmokeAuth",
            MB_OK | MB_ICONERROR | MB_SYSTEMMODAL
        );
        return 1;
    };
    auth->input();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "[+] Authenticated" << std::endl;
    std::cin.get();
    return 0;
};
