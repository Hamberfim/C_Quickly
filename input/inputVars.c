#include <stdio.h>

int main()
{
    // variables
    char letter;
    int num1, num2;
    // get user input
    printf("Enter any single keyboard charater: ");
    scanf("%c", &letter); // "%c" is the data type "&letter" is the memory address of the "letter" variable

    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &num1, &num2);

    // output the gathered data
    printf("Letter input was %c\n", letter);
    printf("Stored at: %p\n", &letter);

    printf("Numbers input were %d and %d\n", num1, num2);
    // printf("Stored at: %p\n", &num1, &num2);

    // end function declaration
    return 0;
}