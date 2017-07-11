#ifndef __MYSERVER_OSWRAP_HPP__
#define __MYSERVER_OSWRAP_HPP__

#ifdef OSWRAP_OS_WINDOWS
    #define OSWRAP_DLL_EXPORT __declspec(dllexport)
    #define OSWRAP_CLASS OSWRAP_DLLEXPORT
    #defien OSWRAP_API OSWRAP_DLL_EXPORT
#else
    #define OSWRAP_CLASS
    #define OSWRAP_API
#endif

namespace MyServer
{
    typedef void * OSHandle;
    
    namespace OS
     
        class OSWRAP_CLASS CAllocator
        {
            public:
                CAllocator() throw();
                virtual ~CAllocator();
              
                virutal void * AllocateMemory(size_t n) throw();
                virtual bool FreeMemory(void * lpBuffer) throw();
              
            protected:
            OSHandle mv_hOSHeap;
        };
    }
}

#endif
