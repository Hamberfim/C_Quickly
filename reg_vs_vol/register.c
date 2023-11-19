#include <stdio.h>

int main()
{
    register int num = 0;
    while (num < 5)
    {
        ++num;
        printf("loop %d \n", num);
    }

    return 0;
}