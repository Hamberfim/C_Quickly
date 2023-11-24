#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int someNum = rand() % 10 + 1; // Generate a random number between 1 and 10

    ((someNum % 2 == 0) ? printf("Number %d is even.\n", someNum) : printf("Number %d is odd.\n", someNum));
    // end
    return 0;
}