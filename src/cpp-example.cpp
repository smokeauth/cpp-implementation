#define NOMINMAX
#include <windows.h>
#include <iostream>
#include "auth/auth.hpp"

#pragma comment(lib, "winhttp.lib")

static std::string app_id = ""; // your application id here

int main()
{
    if (!SmokeAuth->initialize(app_id)) 
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
    SmokeAuth->input();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "WOW, VALID KEY!" << std::endl; 
    // now do whatever you want
    std::cin.get();
    return 0;
};
