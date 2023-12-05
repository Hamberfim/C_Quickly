#include <stdio.h>

int main()
{
    int i, j;

    for (int i = 1; i < 4; i++)
    {
        printf("Outer loop interation %d\n", i);
        for (int j = 1; j < 4; j++)
        {
            printf("\tInner loop iteration %d\n", j);
        }
    }

    return 0;
}