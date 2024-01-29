#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char firstName[25];
  char lastName[25];
  char gender[10];
  char age;
} Person;

// fake inheritance
typedef struct {
  Person person;
  char dept[25];
  char title[25];
} Employee;

Person tom = {"Tom", "Smith", "male", 35};
Employee tomSmith = {{"Tom", "Smith", "male", 35}, "Sales", "Sales Manager"};

int main(void) {
  // access person struct
  printf("%s %s is a %s age %d.\n", tom.firstName, tom.lastName, tom.gender,
         tom.age);

  printf("%s %s works as a %s in the %s department.\n",
         tomSmith.person.firstName, tomSmith.person.lastName, tomSmith.title,
         tomSmith.dept);

  return 0;
}