#include "StdAfx.hpp"
#include "MyServer.OSWrap.hpp"

namespace MyServer
{
    namespace OS
    {
        CAllocator::CAllocator() : mv_hHeap(nullptr)
        {
#ifdef OSWRAP_OS_WINDOWS
            mv_hHeap = ::GetProcessHeap();
#endif
        }
    }
}
