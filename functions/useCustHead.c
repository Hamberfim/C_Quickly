#include <stdio.h>
#include "utils.h"

// function prototypes
void getNum();

int main()
{

    getNum();

    return 0;
}

void getNum()
{
    int num;
    char again;

    // user input
    printf("Enter an integer to be squared: \n");
    scanf("%d", &num);
    printf("%d squared is %d\n", num, square(num)); // call function from custom header include

    printf("Square another number? Y or N: \n");
    scanf("%1s", &again);

    if (again == 'Y' || again == 'y')
    {
        getNum();
    }
    else
    {
        return;
    }
}