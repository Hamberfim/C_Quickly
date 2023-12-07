#include <stdio.h>

// function prototypes
void display(char str[]);
int square(int x);
int cube(int y);

int main()
{
    int num;
    char msg[51] = "This string is passed as an argument to a function.";

    // call functions
    display(msg);
    num = square(4);
    printf("4*4=%d\n", num);
    printf("4*4*4=%d\n", cube(4));
}

// functions
void display(char str[])
{
    printf("%s\n", str);
}

int square(int x)
{
    return x * x;
}

int cube(int y)
{
    return (y * y) * y;
}