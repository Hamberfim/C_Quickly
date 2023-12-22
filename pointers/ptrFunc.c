#include <stdio.h>

// function prototype
int bounce(int num);
int caller(int (*function)(int), int b);

int main()
{
    int num;
    int (*fptr)(int) = bounce;

    num = (*fptr)(10); // pointer function must be within parentheses to avoid compiling errors
    printf("Return value: %d\n", num);

    num = caller(fptr, 5);
    printf("Return value: %d\n", num);

    return 0;
}

int bounce(int num)
{
    printf("\nReceived value: %d\n", num);
    return ((3 * num) + 3);
}

int caller(int (*function)(int), int b)
{
    return (*function)(b);
}