#include <stdio.h>

int main(void) {

  /*
  your program should take 3 integers (as 3 bit Binary number ) as input and
  output it's 1's Complement.
  - Eg. input
  0 1 0
  - Eg. output
  101
  - Don't output anything else except the answer
*/
  // START CODE
  int d1, d2, d3 ; //d represents digit 1,2,3
  scanf("%d %d %d", &d1,&d2,&d3);
  if(d1 == 1) {
    printf("0");
  } else {
    printf("1");
  }
  if(d2 == 1) {
    printf("0");
  } else {
    printf("1");
  }
  if(d3 == 1) {
    printf("0");
  } else {
    printf("1");
  }
   
  
  // END CODE
  return 0;
}