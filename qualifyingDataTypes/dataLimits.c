#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Short int...\tSize: %d bytes \t", sizeof(short int));
    printf("%d to %d \n", SHRT_MIN, SHRT_MAX);

    printf("Long int...\tSize: %d bytes \t", sizeof(long int));
    printf("%ld to %ld \n", LONG_MIN, LONG_MAX);

    printf("Char...\tSize: %d bytes \n", sizeof(char));
    printf("Float...\tSize: %d bytes \n", sizeof(float));
    printf("Double...\tSize: %d bytes \n", sizeof(double));

    // end function declaration
    return 0;
}