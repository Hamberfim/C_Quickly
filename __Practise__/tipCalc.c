/* Name: tipCalc
 * Author: Anthony Hamlin
 * Description:
 *  This program calculate a tip and the total with tip based on user input.
 */
#include <stdio.h>
#include <stdlib.h>

// function prototype
void CalculateTip(double billAmount, double tipRate);

int main(void) {
  double billAmount = 0;
  double tipRate = 0;

  // prompt for bill amount
  printf("What is the amount of the bill?\n");
  scanf("%le", &billAmount);

  // prompt for tip rate as a percent
  printf("What tip rate do you want to calculate(15-25 is standard)?\n");
  scanf("%le", &tipRate);

  // calculate tip, display tip and total amount with tip - function call
  CalculateTip(billAmount, tipRate);

  return 0;
}

void CalculateTip(double billAmount, double tipRate) {
  double tipAmount = billAmount * (tipRate / 100);
  double total = billAmount + tipAmount;
  printf("======= Tip and Total =======\n");
  printf("\tBill: %.2f\n", billAmount);
  printf("\tTip(%.0f%%): %.2f\n", tipRate, tipAmount);
  printf("\tTotal: $%.2f\n", total);
}