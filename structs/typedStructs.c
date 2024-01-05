#include <stdio.h>

// declare typed struct | Note the similarity to typescript
typedef struct {
  int x;
  int y;
} Point;

// variables based on the typed struct
Point top = {15, 24};
Point bottom;

// second type struct with nested struct members
typedef struct {
  Point a;
  Point b;
} Box;

// switched to google format style over Allman
int main() {
  bottom.x = 5;
  bottom.y = 8;
  printf("Bottom x: %d, Bottom y: %d\n", bottom.x, bottom.y);

  Box rect = {{6, 12}, {30, 20}};
  printf("Point ax: %d\n", rect.a.x);
  printf("Point ay: %d\n", rect.a.y);
  printf("Point bx: %d\n", rect.b.x);
  printf("Point by: %d\n", rect.b.y);

  return 0;
}