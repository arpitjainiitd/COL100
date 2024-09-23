#include <stdio.h>

int main(void) {

  /*
  your program should take 3 integers as input(3 bit Binary Number) and output
  its Decimal    Representation.
  - Eg. input
  1 0 0
  - Eg. output
  4
  - Don't output anything else except the answer
*/
  // START CODE
  int num1, num2, num3 ;
  scanf("%d %d %d", &num1, &num2, &num3);
  printf("%d", 4*num1 + 2*num2 + 1*num3);
  
  // END CODE
      return 0;
}