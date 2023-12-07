#include <stdio.h>

// declare function prototypes
void firstFunc();
int square5();
int cube5();

int main()
{
    int num;

    // call functions
    firstFunc();
    num = square5();
    printf("5*5=%d\n", num);
    printf("5*5*5=%d\n", cube5());
}

// functions
void firstFunc()
{
    printf("First Function Executed.\n");
}

int square5()
{
    int square = 5 * 5;
    return square;
}

int cube5()
{
    int cube = (5 * 5) * 5;
    return cube;
}