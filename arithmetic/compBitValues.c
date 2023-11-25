#include <stdio.h>
#include <math.h>

// function data type
int convert(long long);

// comparing bit values
int main()
{
    int x = 10, y = 5;
    printf("\n Start: (x=%d, y=%d)\n", x, y);

    // binary bit manipulation
    // XOR - exclusive OR
    x = x ^ y; // 1010 ^ 0101 = 1111 (decimal 15)
    printf("\n 1stXOR (x=%d, y=%d)\n", x, y);
    x = x ^ y; // 1111 ^ 0101 = 1010 (decimal 10)
    printf("\n 2ndXOR (x=%d, y=%d)\n", x, y);

    x = 10, y = 5; // reset
    x = x | y;     // 1010 | 0101 = 1111 (decimal 15)
    printf("\n x | y (x=%d, y=%d)\n", x, y);

    x = 10, y = 5; // reset
    x = x & y;     // 1010 & 0101 = 1000 (decimal 0)
    printf("\n x & y (x=%d, y=%d)\n", x, y);

    // binary to dec
    long long biNum = 10010; // 18
    printf("%lld in binary = %d in decimal\n", biNum, convert(biNum));

    // shift bits left
    long long result = biNum << 2;
    printf("Shift left 2 %lld in binary = %d in decimal\n", result, convert(result));

    // shift bits right
    biNum = 10010; // reset 18
    result = biNum >> 2;
    printf("Shift right 2 %lld in binary = %d in decimal\n", result, convert(result));

    // test values
    printf("===TEST===\n");
    long long allBits = 0b00100000; // 32
    printf("%lld in binary = %d in decimal\n", allBits, convert(allBits));

    long long noBits = 0b00000000; // 0
    printf("%lld in binary = %d in decimal\n", noBits, convert(noBits));

    long long allBitsShift = (1 >> allBits);
    printf("%lld in binary = %d in decimal\n", allBitsShift, convert(allBitsShift));
    long long noBitsShift = (1 << noBits);
    printf("%lld in binary = %d in decimal\n", noBitsShift, convert(noBitsShift));

    return 0;
}

// function definition - convert binary to decimal
int convert(long long n)
{

    int dec = 0, i = 0, rem;

    while (n != 0)
    {

        // get remainder of n divided by 10
        rem = n % 10;

        // divide n by 10
        n /= 10;

        // multiply rem by (2 ^ i)
        // add the product to dec
        dec += rem * pow((double)2, (double)i); // pow(double(baseValue of 2), double(i));

        // increment i
        ++i;
    }

    return dec;
}