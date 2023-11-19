#include <stdio.h>

// global variables
static int sum = 100; // "static" makes it available globally to only this file, without it is truly global

int main()
{
    extern int sum;
    extern int gsum;
    extern int gnum;
    printf("Static sum is %d \n", sum);
    printf("global sum is %d \n", gsum);
    printf("global num is %d \n", gnum);

    return 0;
}