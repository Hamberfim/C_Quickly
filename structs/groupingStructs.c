#include <stdio.h>

// declare a struct
struct coords
{
    int x;
    int y;
} point;

// create a second struct instance of the first one
struct coords top;

int main(void)
{
    // assign values to struct member variables
    point.x = 5;
    point.y = 8;

    // assign values to the second instance struct member variable
    top.x = 14;
    top.y = 24;

    printf("Point x: %d, Point y: %d\n", point.x, point.y);
    printf("Top x: %d, Top y: %d\n", top.x, top.y);

    return 0;
}