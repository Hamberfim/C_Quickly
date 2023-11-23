// the preprocessor define directive to 'define' constants,
// also #ifdef #endif to see if something is defined, known as a "macro"
#include <stdio.h>

// preprocessor directives
#define LINE "______________________________"
#define TITLE "C Programming"
#define AUTHOR "Hamberfim"

// conditional macros
#ifdef _WIN32
#define SYSTEM "Windows"
#endif

#ifdef linux
#define SYSTEM "Linux"
#endif

int main()
{
    printf("\n \t %s \n \t %s \n", LINE, TITLE);
    printf("\t by %s \n \t %s ", AUTHOR, LINE);
    printf("\n \t Current Operating System %s \n\n", SYSTEM);

    // end
    return 0;
}