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
    
#if defined(OSWRAP_WINDOWS_32BIT)
    typedef OSSizeT unsigned int;
#elif defined(OSWRAP_WINDOWS_64BIT)
    typedef OSSizeT unsigned __int64;
#endif
    
    namespace OS
    {
        class OSWRAP_CLASS IAllocator
        {
        public:
            enum AllocationOptions
            {
                Normal = 0,
                ZeroMemoryBlock = 1
            };
            
            virtual ~IAllocator();
            
            virtual void * AllocateMemory(OSSizeT nSize,
                                         AllocationOptions enOptions) throw() = 0;
            virtual bool FreeMemory(void * lpBuf) = 0;
            virtual OSSizeT SizeOfMemory(const void * lpBuffer) const = 0;
        };
        
        class OSWRAP_CLASS CHeapAllocator : public IAllocator
        {
        public:
            CHeapAllocator();
            virtual ~CHeapAocator();
        protected:
            OSHandle mv_hHeap;
        };
    }
}

#endif
