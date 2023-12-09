#include <stdio.h>

int main()
{
    int number = 8;     // regular int variable
    int *ptr = &number; // int pointer variable with address of the  number variable

    printf("Regular variable contains: %d\n", number);
    printf("Pointer variable contains: %p\n", ptr);
    printf("Pointer points to value: %d\n\n", *ptr); // value dereferenced by the pointer

    *ptr = 12;

    printf("Regular variable contains: %d\n", number);
    printf("Pointer variable contains: %p\n", ptr);
    printf("Pointer points to value: %d\n\n", *ptr); // value dereferenced by the pointer

    return 0;
}