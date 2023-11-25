#include <stdio.h>

// measuring data size, sizeof() returns a long unsigned int value of the number of bytes needed to store the data in memory
// padding will also get added to the memory allocation so that it's a multiple of four

int main()
{
    char letterA = 'A';
    char charArr[3] = {'B', 'C', 'D'}; // is always a char array
    char *pointerArr = "A pointer";    // can be a pointer to a single char or to a char array.

    int intNum = 1234567890;
    int intArr[3] = {0, 1, 2};

    float PI = 3.14159;
    float fltArr[3] = {0.1, 0.2, 0.3};

    double price = 19.99;
    double dblArr[3] = {0.99, 1.99, 2.99};

    // output memory allocation
    printf("Size of char data type is %ld bytes\n", sizeof(letterA));
    printf("Size of char[] array data type is %ld bytes\n", sizeof(charArr[3]));
    printf("Size of char pointer-array data type is %ld bytes\n", sizeof(pointerArr));

    printf("Size of int data type is %ld bytes\n", sizeof(intNum));
    printf("Size of int[] array data type is %ld bytes\n", sizeof(intArr[3]));

    printf("Size of float data type is %ld bytes\n", sizeof(PI));
    printf("Size of float[] array data type is %ld bytes\n", sizeof(fltArr[3]));

    printf("Size of double data type is %ld bytes\n", sizeof(price));
    printf("Size of double[] array data type is %ld bytes\n", sizeof(dblArr[3]));

    // total memory allocation
    struct
    {
        char letterA;
        char charArr[3];
        char *pointerArr;
        int intNum;
        int intArr[3];
        float PI;
        float fltArr[3];
        double price;
        double dblArr[3];

    } total;
    printf("Of the 42 bytes above the total allocation with padding is %ld bytes\n", sizeof(total));

    // end
    return 0;
}