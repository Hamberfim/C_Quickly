#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// run using the console
int main()
{
    unsigned int num = 5;

    for (int i = 0; i < 32; i++)
    {
        printf("Left shifted by %d: %08x | %u\n", i, num << i, num << i);
    }

    return 0;
}