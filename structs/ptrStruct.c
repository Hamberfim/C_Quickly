#include <stdio.h>

typedef struct {
  char str[5];
} ArrType;

ArrType arr1 = {"Bad"};
ArrType arr2 = {{'B', 'a', 'd', ' ', '\0'}};

typedef struct {
  char *str;
} PtrType;

PtrType ptr = {"Good"};

int main(void) {

  printf("Array 1 string is '%s'\n", arr1.str);
  printf("Array 2 string is '%s'\n", arr2.str);

  arr1.str[0] = 'I';
  arr1.str[1] = 'd';
  arr1.str[2] = 'e';
  arr1.str[3] = 'a';
  arr1.str[4] = '\0';
  printf("Array 1 string is now '%s'\n", arr1.str);

  printf("Pointer string is '%s'\n", ptr.str);
  ptr.str = "Fabulous";
  printf("Pointer string is now '%s'\n", ptr.str);

  return 0;
}