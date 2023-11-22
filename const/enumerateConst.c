#include <stdio.h>

// C language enum constants

int main()
{
    int scoreTotal = 0;
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

    // output statements
    printf("\nPotted a red worth %d\n", RED);
    printf("Then a black worth %d\n", BLACK);
    printf("Then another red worth %d\n", RED);
    printf("Lastly a blue worth %d\n", BLUE);

    scoreTotal = RED + BLACK + RED + BLUE;

    printf("My total score is %d\n", scoreTotal);

    // end of file
    return 0;
}