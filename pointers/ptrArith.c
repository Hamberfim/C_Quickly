#include <stdio.h>

// pointer arithmetic
int main()
{

    int i;
    int numsArr[10] = {1,
                       2,
                       3,
                       4,
                       5,
                       6,
                       7,
                       8,
                       9,
                       10};

    // using increment or decrement operators to move forward or backward to other memory addresses
    int *ptr = numsArr;
    printf("\nAt Address: %p is value: %d", ptr, *ptr);
    ptr++;
    printf("\nAt Address: %p is value: %d", ptr, *ptr);
    ptr--;
    printf("\nAt Address: %p is value: %d\n\n", ptr, *ptr);

    printf("===== loop w/increment operator to move forward to other memory addresses =====\n");
    // loop using increment operator to move forward to other memory addresses
    for (int i = 0; i < 10; i++)
    {
        printf("Element index %d at Address: %p is value: %d\n", i, ptr, *ptr);
        ptr++;
    }

    return 0;
}