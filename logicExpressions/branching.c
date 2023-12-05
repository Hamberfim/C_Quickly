#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    // seed random number generator with current elapsed time
    srand(time(NULL));
    int randomDigit = (rand() % 4) + 1; // random 1-4

    int num = randomDigit;
    char letter;
    if (randomDigit == 1)
    {
        letter = 'a';
    }
    else if (randomDigit == 2)
    {
        letter = 'b';
    }
    else if (randomDigit == 3)
    {
        letter = 'c';
    }
    else
    {
        letter = 'z';
    }

    // logic expression branching using a switch statement
    switch (num)
    {
    case 1:
        printf("The number is one.\n");
        break;
    case 2:
        printf("The number is two.\n");
        break;
    case 3:
        printf("The number is three.\n");
        break;
    default:
        printf("Unrecognized input.\n");
        break;
    }

    switch (letter)
    {
    case 'a':
        printf("The letter is 'a'.\n");
        break;
    case 'b':
        printf("The letter is 'b'.\n");
        break;
    case 'c':
        printf("The letter is 'c'.\n");
        break;
    default:
        printf("Unrecognized input.\n");
        break;
    }

    return 0;
}