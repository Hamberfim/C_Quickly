#include <stdio.h>

int main()
{
    // test
    char *myMessage = "This is a message.\n";
    int sizeMsg = sizeof(myMessage);
    printf("%s", myMessage);
    printf("myMessage data size is %d bytes.\n", sizeMsg);
    printf("myMessage memory location is %p.\n", &myMessage);

    // operators
    int a = 8, b = 5;
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modules: %d\n", a % b);

    printf("Post Decrement: %d\n", a--);
    printf("Now: %d\n", a);
    printf("Pre Decrement: %d\n", --a);
    printf("Now: %d\n", a);

    printf("Post Increment: %d\n", a++);
    printf("Now: %d\n", a);
    printf("Pre Increment: %d\n", ++a);
    printf("Now: %d\n", a);

    int zero = 0;
    int one = 1;
    printf("Equality (0==0) %d\n", zero == zero);
    printf("Equality (0==1) %d\n", zero == one);
    printf("Inequality (0!=1) %d\n", zero != one);
    printf("Greater Or Equal (0>=0) %d\n", zero >= zero);
    printf("Less Or Equal (0<=1) %d\n", zero <= one);

    // end
    return 0;
}
