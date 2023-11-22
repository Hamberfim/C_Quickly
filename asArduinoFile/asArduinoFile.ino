#include <stdio.h>
#include <avr/io.h>  //defines pins, ports etc

int main() {
  // setup here
  Serial.begin(9600);

  // local vars
  //const float PI = 3.141593;
  #define PI 3.141593

  // loop here
  while (1) {
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
  }            //end loop
  return (0);  //end program. This never happens.
}