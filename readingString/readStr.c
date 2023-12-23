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
    printf("%s\n", alphaArr);
    printf("%s\n", betaPtr);

    return 0;
}