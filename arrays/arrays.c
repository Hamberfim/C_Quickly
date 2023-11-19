#include <stdio.h>

int main()
{
    int numIntArr[3];
    numIntArr[0] = 10;
    numIntArr[1] = 20;
    numIntArr[2] = 30;

    printf("numIntArr: %d, %d, %d \n", numIntArr[0], numIntArr[1], numIntArr[2]);

    char catStr[4] = {'C', 'a', 't', '\0'};
    printf("String is: %s\n", catStr);

    return 0;
}