#include <stdio.h>

int main(void) {

  /*
  your program should take 2 integers (p and q) as input and output the Integral
  (I) and fractional (f) part of rational number(p/q) upto two decimal places
  - Eg. input
  6 5
  - Eg. output
  1 0.20
  - Don't output anything else except the answer
*/
  // START CODE
  float firstNo_p ,secondNo_q ;
  scanf("%f", &firstNo_p);
  scanf("%f", &secondNo_q);
  int integral_part = firstNo_p/secondNo_q;
  printf("%d ", integral_part);
  printf("%.2f", (float) (firstNo_p/secondNo_q) - integral_part);
  
  // END CODE
  return 0;
}