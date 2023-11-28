#include <stdio.h>

int main()
{
    int flags = 8;     // binary 1000 - (1x8 0x4 0x2 0x1)
    flags = flags | 2; // 1000 | 0010 (0x8 0x4 1x2 0x1) decimal 10

    printf("Flag 1: %s\n", ((flags & 1) > 0) ? "ON" : "OFF");
    printf("Flag 2: %s\n", ((flags & 2) > 0) ? "ON" : "OFF");
    printf("Flag 3: %s\n", ((flags & 4) > 0) ? "ON" : "OFF");
    printf("Flag 4: %s\n\n", ((flags & 8) > 0) ? "ON" : "OFF");

    // mask the first four bits of the byte
    char mask = 15;        // binary 00001111
    flags = ~flags & mask; // ~(1010 & 1111 = 1010) = 0101

    // display the reverse bits
    printf("Flag 1: %s\n", ((flags & 1) > 0) ? "ON" : "OFF");
    printf("Flag 2: %s\n", ((flags & 2) > 0) ? "ON" : "OFF");
    printf("Flag 3: %s\n", ((flags & 4) > 0) ? "ON" : "OFF");
    printf("Flag 4: %s\n\n", ((flags & 8) > 0) ? "ON" : "OFF");
    printf("Flag decimal value is %d\n", flags);

    // shift the "on" but flags one bit to the left and display the new decimal value pattern
    flags = flags << 1; // 0101 << 1 = 1010
    printf("Flags decimal value is now %d\n", flags);

    return 0;
}
