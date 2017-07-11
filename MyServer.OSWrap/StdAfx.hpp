#ifndef __STDAFX_HPP__
#define __STDAFX_HPP__

#if defined(_WIN32) || defined(WIN32)
    #define OSWRAP_WINDOWS_32BIT
    #define OSWRAP_OS_WINDOWS
#elif defined(_WIN64) || defined(WIN64)
    #definee OSWRAP_WINDOWS_64BIT
    #define OSWRAP_OS_WINDOWS
#endif

#ifdef OSWRAP_OS_WINDOWS
   #include <windows.h>
#endif

#endif
