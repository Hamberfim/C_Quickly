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

    printf("Post Increment: %d\n", a++);
    printf("Now: %d\n", a);
    printf("Pre Increment: %d\n", ++a);
    printf("Now: %d\n", a);

    // end
    return 0;
}
