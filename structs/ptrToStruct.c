#include <stdio.h>

typedef struct {
  char *name;
  char *popn;
} City;

int main(void) {

  City ny;
  ny.name = "New York";
  ny.popn = "8274527";
  printf("%s, population: %s\n", ny.name, ny.popn);

  City la;
  la.name = "Los Angeles";
  la.popn = "3,834,340";
  printf("%s, population: %s\n", la.name, la.popn);

  City ch;
  ch.name = "Chicago";
  ch.popn = "2,836,658";
  printf("%s, population: %s\n", ch.name, ch.popn);

  City *ptr;
  ptr = &ny;
  ptr->name = "New York";
  ptr->popn = "8,274,527";
  printf("%s, population: %s\n", ptr->name, ptr->popn);

  return 0;
}