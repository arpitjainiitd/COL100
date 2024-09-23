#include <stdio.h>

int main(void) {

  /*
  your program should take a natural number as input and output its
  corresponding English letter. You have to use following  circular mapping of
  natural number with letter. 1- a, 2 - b, 3 - c, ...., 26 - z, 27 - a, 28 - b,
  ....., 51 - y, 52 - z, .. (infinity)

  - Eg. input
  28
  - Eg. output
  b
  - Don't output anything else except the answer
*/
  // START CODE
int natural_numberinput ;
scanf("%d", &natural_numberinput);
int modular_output ;
  modular_output = natural_numberinput%26 ;
  if(modular_output == 1) {
  printf("a");
} 
  else if (modular_output == 2) {
  printf("b");
}
  else if (modular_output == 3){
  printf("c");
  }
  else if (modular_output == 4){
  printf("d");
  }
  else if (modular_output == 5){
  printf("e");
  }
  else if (modular_output == 6){
  printf("f");
  }
  else if (modular_output == 7){
  printf("g");
  }
  else if (modular_output == 8){
  printf("h");
  }
  else if (modular_output == 9){
  printf("i");
  }
  else if (modular_output == 10){
  printf("j");
  }
  else if (modular_output == 11){
  printf("k");
  }
  else if (modular_output == 12){
  printf("l");
  }
  else if (modular_output == 13){
  printf("m");
  }
  else if (modular_output == 14){
  printf("n");
  }
  else if (modular_output == 15){
  printf("o");
  }
  else if (modular_output == 16){
  printf("p");
  }
  else if (modular_output == 17){
  printf("q");
  }
  else if (modular_output == 18){
  printf("r");
  }
  else if (modular_output== 19) {
  printf("s");
  }
  else if (modular_output == 20){
  printf("t");
  }
  else if (modular_output == 21){
  printf("u");
  }
  else if (modular_output == 22){
  printf("v");
  }
  else if (modular_output == 23){
  printf("w");
  }
  else if (modular_output == 24){
  printf("x");
  }
  else if (modular_output == 25){
  printf("y");
  }
  else {
    printf("z");
  }
  
  // END CODE
  return 0;
}