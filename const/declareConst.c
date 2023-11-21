#include <stdio.h>

int main()
{
    // local vars
    const float PI = 3.141593;

    float diameter, radius, circ, area;
    printf("Enter the diameter of a circle in millimeters: ");
    scanf("%f", &diameter);

    // calculations
    circ = PI * diameter;
    radius = diameter / 2;
    area = PI * (radius * radius);

    // output
    printf("===============\n\n  The circumference is %.2fmm", circ);
    printf("\n  and the area is %.2fsq.mm\n\n===============\n", area);

    return 0;
}