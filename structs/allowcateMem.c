#include <stdio.h>
#include <stdlib.h>

// Window Specific function prototype
// int _msize(int *bytes);
// Linux Specific function prototype
int malloc_usable_size(int *bytes);

int main(void) {
  int size;
  int *mem;

  mem = malloc(100 * sizeof(int));

  if (mem != NULL) {
    size = malloc_usable_size(mem);
    printf("Size of block for 100 ints: %d bytes\n", size);
    printf("Beginning at %p\n", mem);
  } else {
    printf("!! Insufficient Memory\n");
    return 1;
  }

  // attempt to enlarge memory allocation
  mem = realloc(mem, size + (100 * sizeof(int)));
  if (mem != NULL) {
    size = malloc_usable_size(mem);
    printf("Size of block for 200 ints: %d bytes\n", size);
    printf("Beginning at %p\n", mem);
  } else {
    printf("!! Insufficient Memory\n");
    return 1;
  }

  // attempt to enlarge memory allocation
  mem = realloc(mem, size + (100 * sizeof(int)));
  if (mem != NULL) {
    size = malloc_usable_size(mem);
    printf("Size of block for 300 ints: %d bytes\n", size);
    printf("Beginning at %p\n", mem);
  } else {
    printf("!! Insufficient Memory\n");
    return 1;
  }

  free(mem);

  return 0;
}