#include <stdio.h>

typedef struct {
  char *name;
  double price;
  int qty;
} Item;

// function prototype
void display(Item val, Item *ref);

Item fruits[3] = {
    {"apple", 0.99, 10}, {"orange", 1.09, 12}, {"banana", 0.49, 15}};

int main(void) {

  display(fruits[0], &fruits[0]);

  return 0;
}

// function
void display(Item val, Item *ref) {
  printf("========== ITEMS ==========\n");
  for (int i = 0; i < 3; i++) {
    printf("%s: %d, $%.2f\n", fruits[i].name, fruits[i].qty, fruits[i].price);
  }

  printf("========== first item ==========\n");
  printf("%s: %d, $%.2f\n", val.name, val.qty, val.price);

  printf("========== first item by val ==========\n");
  val.name = "Pear";
  val.qty = 23;
  val.price = 1.19;

  printf("%s: %d, $%.2f\n", fruits[0].name, fruits[0].qty, fruits[0].price);

  printf("========== first item by ref ==========\n");
  ref->name = "Peach";
  ref->qty = 35;
  ref->price = 0.69;
  printf("%s: %d, $%.2f\n", fruits[0].name, fruits[0].qty, fruits[0].price);
}