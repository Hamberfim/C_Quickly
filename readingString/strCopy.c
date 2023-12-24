#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "A Large Text String";
    printf("str1: %s, %ld elements and %ld characters including spaces\n", str1, sizeof(str1), strlen(str1));

    char str2[] = "A Small String";
    printf("str2: %s, %ld elements and %ld characters including spaces\n", str2, sizeof(str2), strlen(str2));

    // strcpy(target-string-array-to-copy-to, source-string-array-to-copy-from)
    strcpy(str1, str2);
    printf("str1: %s, %ld elements and %ld characters including spaces\n", str1, sizeof(str1), strlen(str1));

    // strncpy(target-array, source-array, length-to-copy)
    strncpy(str1, str2, 5);
    str1[5] = '\0'; // add terminating character to the copy
    printf("str1: %s, %ld elements and %ld characters including spaces\n", str1, sizeof(str1), strlen(str1));

    return 0;
}