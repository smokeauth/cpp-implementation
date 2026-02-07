#pragma once
#include <windows.h>
#include <string>

namespace g_auth
{
    class c_auth
    {
    public:
        static bool initialize(const std::string& app_identifier);
        static void input();
    };
};

inline g_auth::c_auth* auth = new g_auth::c_auth();
