#include <stdio.h>

int main(void)
{
    char alphaArr[6] = {'A',
                        'l',
                        'p',
                        'h',
                        'a',
                        '\0'};

    char *betaPtr = "Beta";
    printf("%s char array is %li bytes\n", alphaArr, sizeof(alphaArr));
    printf("%s pointer is %li bytes\n", betaPtr, sizeof(betaPtr));

    char str[51];
    printf("Enter up to 50 characters with spaces\n");
    // fgets(character-array, number-of-characters-to-read, where-to-read-from)
    fgets(str, sizeof(str), stdin);

    printf("fgets() reads: ");
    puts(str);

    printf("\nfgets() reads: %s and is %li bytes\n", str, sizeof(str));

    return 0;
}