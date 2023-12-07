#include <stdio.h>

//  when a function 'calls' itself its called a 'recursive function'

// function prototypes
void count_down(int num);

int main()
{
    int start;

    // user input
    printf("Enter a positive whole number to start a count down from: \n");
    scanf("%d", &start);

    printf("Lift off in\n");
    count_down(start);
    printf("We Have Lift Off!!\n");
    return 0;
}

// recursive function
void count_down(int num)
{
    printf("%d\n", num);
    --num;

    if (num < 0)
    {
        return;
    }
    else
    {
        count_down(num);
    }
}