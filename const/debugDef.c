// debugging definition
#include <stdio.h>

#define DEBUG 1 // comment/uncomment, use 0, 1, 2
// #undef DEBUG    // comment/uncomment, use 0, 1, 2

// preprocessor directives to report the macro status
int main()
{

#if DEBUG == 1
    printf("Debug status is 1\n");
#elif DEBUG == 2
    printf("Debug status is 2\n");
#else
#ifdef DEBUG
    printf("Debug is defined\n");
#endif
#ifndef DEBUG
    printf("Debug is not defined\n");
#endif
#endif

    return 0;
}
