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
    printf("\n\tThe circumference is %.2f mm", circ);
    printf("\n\tand the area is %.2f sq.mm\n", area);

    return 0;
}