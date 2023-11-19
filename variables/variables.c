#include <stdio.h>

int main()
{
    // declare variables
    char letterA = 'A';
    int numInt = 100;
    float price = 2.99;
    double pi = 3.1415926536;

    // output variables
    printf("The letter charater is %c\n", letterA);
    printf("The value of the integer is %d\n", numInt);
    printf("The value of the float is %f\n", pi);
    printf("%%7d displays %7d \n", numInt);
    printf("%%07d displays %07d\n", numInt);
    printf("Pi is approximately %1.10f\n", pi);
    printf("Right-Aligned %20.3f rounded\n", pi);
    printf("Left-Aligned %-20.3f rounded\n", pi);

    // exist function declaration
    return 0;
}