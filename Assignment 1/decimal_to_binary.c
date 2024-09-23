#include <stdio.h>

int main(void) {

  /*
  your program should take an integer between [0-7] (including both 0 and 7) as input and
  output its 3 Bit Binary Representation.
  - Eg. input
  2
  - Eg. output
  010
  - Don't output anything else except the answer
*/
  // START CODE
  int decimalI; //decimalI is the input integer between [0,7]
  scanf("%d", &decimalI);
  int digit1, digit2, digit3 ;
  digit3 = decimalI%2;
  digit2 = (decimalI/2)%2;
  digit1 = (decimalI/4)%2;
  printf("%d%d%d",digit1 , digit2, digit3);
  
 
  // END CODE
  return 0;
}