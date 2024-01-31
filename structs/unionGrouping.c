#include <stdio.h>

typedef struct {
  int num;
  char ltr;
  char *str;
} Distinct;

typedef union {
  int num;
  char ltr;
  char *str;
} Unified;

int main(void) {
  // struct
  Distinct sdata = {10, 'C', "Program"};

  // display struct data
  printf("Struct:\n\tNumber: %d\n", sdata.num);
  printf("\tStored at: %p\n", &sdata.num);
  printf("\tLetter: %c\n", sdata.ltr);
  printf("\tStored at: %p\n", &sdata.ltr);
  printf("\tString: %s\n", sdata.str);
  printf("\tStored at: %p\n", &sdata.str);

  // union
  Unified udata;

  // assign and display
  udata.num = 16; // memory location will be replace with the next assignment
  printf("Union:\n\tNumber: %d\n", udata.num);
  printf("\tStored at: %p\n", &udata.num);

  // memory location will be replace with the next assignment
  udata.ltr = 'A';
  printf("\tLetter: %c\n", udata.ltr);
  printf("\tStored at: %p\n", &udata.ltr);

  // memory location will be replace with the next assignment
  udata.str = "Union";
  printf("\tString: %s\n", udata.str);
  printf("\tStored at: %p\n", &udata.str);

  return 0;
}