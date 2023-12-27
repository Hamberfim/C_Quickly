#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    // char buffer[33];

    char s1[10] = "12eight", s2[10] = "-65.8", s3[10] = "x13";

    n1 = atoi(s1);
    printf("String %s converts to integer %d\n", s1, n1);

    n2 = atoi(s2);
    printf("String %s converts to integer %d\n", s2, n2);

    n3 = atoi(s3);
    printf("String %s converts to integer %d\n", s3, n3);

    // decimal to binary
    // int i = 1750;
    // itoa(i, buffer, 2); // not in the standard lib
    // printf("Decimal %d is binary: %s\n", i, buffer);

    // decimal to octal
    n2 = sprintf(s3, "%o", n1);
    printf("Decimal %d is octal: %s chars: %d\n", n1, s3, n2);

    // decimal to hexadecimal
    n3 = sprintf(s3, "%x", n1);
    printf("Decimal %d is hexadecimal: %s chars: %d\n", n1, s3, n3);

    return 0;
}