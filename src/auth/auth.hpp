#pragma once
#include <windows.h>
#include <string>

namespace auth
{
    class c_auth
    {
    public:
        static bool initialize(const std::string& app_identifier);
        static void input();
    };
};

inline auth::c_auth* SmokeAuth = new auth::c_auth();
