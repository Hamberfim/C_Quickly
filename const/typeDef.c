// preprocessor instructions
#include <stdio.h>

int main()
{
    // declare and initialize an enum
    enum SNOOKER
    {
        RED = 1, // set to one so it doesn't start at zero
        YELLOW,
        GREEN,
        BROWN,
        BLUE,
        PINK,
        BLACK
    };

    enum SNOOKER pair = RED + BLACK;
    printf("Red & Black pair value %d\n", pair);

    // custom data type using 'typedef'
    typedef unsigned short int USINT; // acronym for 'unsigned int'

    // use the custom data type
    USINT num = 16;
    printf("unsigned short int value %d\n", num);
    printf("Data size of unsigned short int is %zu bytes\n", sizeof(num)); // '%zu' for unsigned integer

    // end of file
    return 0;
}