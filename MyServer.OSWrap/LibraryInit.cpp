#include "StdAfx.hpp"

#ifdef OSWRAP_OS_WINDOWS

extern "C" int APIENTRY DllMain(HINSTANCE hDll, DWORD dwReason, LPVOID lpReserved)
{
    int nRetCode = 0;
    
    switch(dwReason)
    {
    case DLL_PROCESS_ATTACH:
        nRetCode = 1;
        break;
    case DLL_THREAD_ATTACH:
        nRetCode = 1;
        break;
    case DLL_THREAD_DETACH:
        nRetCode = 1;
        break;
    case DLL_PROCESS_DETACH:
        nRetCode = 1;
        break;
    };
    
    return nRetCode;
}
