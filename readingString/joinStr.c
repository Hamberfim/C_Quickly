#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "A place for everyone ";
    char str2[] = "and everything in its place";
    // concatenate and display
    strcat(str1, str2);
    printf("%s\n", str1);

    char str3[100] = "The truth is rarely pure ";
    char str4[] = "and never simple - Oscar Wilde";
    // concatenate first 17 chars and display
    strncat(str3, str4, 17);
    printf("%s\n", str3);

    // concatenate/append last 14 chars and display
    strncat(str3, (str4 + 17), 14);
    printf("%s\n", str3);

    return 0;
}