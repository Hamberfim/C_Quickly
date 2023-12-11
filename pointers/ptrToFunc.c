#include <stdio.h>

// declare function prototypes
void twice(int *ptr);
void thrice(int *ptr);

int main()
{
    int number = 5;
    int *ptr = &number;

    printf("ptr stores address: %p\n", ptr);
    printf("ptr dereferences value: %d\n\n", *ptr);

    printf("The number value is %d\n", number);

    twice(ptr);
    printf("The number value is now %d\n", number);
    thrice(ptr);
    printf("The number value is now %d\n", number);

    return 0;
}

// passing pointers to functions

void twice(int *number)
{
    *number = (*number * 2);
}

void thrice(int *number)
{
    *number = (*number * 3);
}