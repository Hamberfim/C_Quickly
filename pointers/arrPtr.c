#include <stdio.h>

int main()
{
    short int i;
    int nums[5] = {1,
                   2,
                   3,
                   4,
                   5};

    int *ptr0 = &nums[0];
    int *ptr1 = &nums[1];
    int *ptr2 = &nums[2];
    int *ptr3 = &nums[3];
    int *ptr4 = &nums[4];

    // an array of pointers
    int *ptrs[5] = {ptr0, ptr1, ptr2, ptr3, ptr4};
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %p is: %d\n", ptrs[i], *ptrs[i]);
    }

    char str[9] = {'C', ' ', 'i', 's', ' ', 'F', 'u', 'n', '\0'};
    char *string = str;
    printf("String is: %s\n", string);

    char *strings[3] = {"Alpha", "Beta", "Kappa"};
    for (int i = 0; i < 3; i++)
    {
        printf("String %d is %s\n", i, strings[i]);
    }

    return 0;
}