#include <stdio.h>

int main()
{
    if (5 > 0)
    {
        printf("Yes, 5 is greater than 0.\n");
        if (7 > 2)
        {
            printf("Yes, 7n is greater than 2.\n");
        }
    }

    if (1 > 2)
    {
        printf("1st Expression is true.\n");
    }
    else if (1 > 3)
    {
        printf("2nd Expression is true.\n");
    }
    else
    {
        printf("Neither expression is true\n");
    }

    return 0;
}