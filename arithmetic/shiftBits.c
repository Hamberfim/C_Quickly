#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// run using the console
int main()
{
    unsigned int num = 5;

    for (int i = 0; i < 32; i++)
    {
        printf("Left shifted by %02d: %08x | %u\n", i, num << i, num << i);
    }

    unsigned int num2 = 100000000;

    for (int i = 0; i < 32; i++)
    {
        printf("Right shifted by %02d: %08x | %d\n", i, num2 >> i, num2 >> i);
    }

    int num3 = 5;

    for (int i = 0; i < 32; i++)
    {
        printf("Left shifted by %02d: %08x | %u\n", i, num3 << i, num3 << i);
    }

    int num4 = 100000000;

    for (int i = 0; i < 32; i++)
    {
        printf("Right shifted by %02d: %08x | %d\n", i, num4 >> i, num4 >> i);
    }

    return 0;
}