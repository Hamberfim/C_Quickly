#include <stdio.h>

int main()
{

    int i;
    int arr[3] = {10, 20, 30};

    i = 0;
    while (i < 3)
    {
        printf("While: arr[%d] = %d.\n", i, arr[i]);
        i++;
    }

    i = 0;
    do
    {
        printf("\nDo-While: arr[%d] = %d.", i, arr[i]);
        i++;

    } while (i < 3);
    printf("\n");

    return 0;
}