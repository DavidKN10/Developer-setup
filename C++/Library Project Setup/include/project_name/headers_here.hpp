#pragma once

#ifdef PROJECTNAME_EXPORTS
#define PROJECTNAME_API __declspec(dllexport)
#else
#define PROJECTNAME_API __declspec(dllimpor)
#endif

extern "C" {
    // declare functions for library here
    /*
        Ex:
        PROJECTNAME_API void test_function(); 
    */
}