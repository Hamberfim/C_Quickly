#include <stdio.h>

int main()
{
    float fNum = 5.57;
    char letterA = 'A';
    int letterZ = 90;
    int x = 7, y = 5;
    double dNum = 0.123456789;

    printf("Float cast to int %d \n", (int)fNum);
    printf("Char cast to int %d \n", (int)letterA);
    printf("Int cast to char %c \n", (char)letterZ);
    printf("Float arithmetic %f \n", (float)x / (float)y);
    printf("Double cast to float %f \n", (float)dNum);

    return 0;
}