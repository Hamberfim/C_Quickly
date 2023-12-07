#include <stdio.h>

// function prototypes
void menu();
void action(int option);

int main()
{
    menu();

    return 0;
}

void menu()
{
    int option;

    printf("\nWhat would you like to do?");
    printf("\n\t1.) Square a number");
    printf("\n\t2.) Multiply two numbers");
    printf("\n\t3.) Exit\n");
    scanf("%d", &option);

    action(option);
}