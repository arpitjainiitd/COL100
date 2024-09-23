#include <stdio.h>

int main(void) {

  // Write your code here
  int n , set_bits = 0, remainder ;
  //taking input till n becomes -1 and printing its tupple thereafter
  while(1){
  scanf("%d", &n);
  if(n == -1){
    break;
  }
  set_bits = 0 ; //set_bits must be set to 0 after each iteration in the while loop as a new input comes in
  // Set bits
  int N = n ;
  if(N > 0 ){
  for (;;) {
      remainder = N % 2;
    if (remainder == 1) {
        set_bits = set_bits + 1; //set_bits count increases as we get a remainder 1 because converting to binary number we get 1 only if the remainder is 1
      }
      N = ((N) - (remainder))/2;
      if (N == 0) {
        break;
      } //till the final quotient becomes 0 we would iterate the loop
    }
  }
 // Co prime calculation 
 int non_coprime = 0, no_of_coprime ; 
 for(int i =2; i<n ; i++){
    for(int j = 2 ; j<=i ; j++){
      if(n%i == 0 && i%j == 0){
        non_coprime++ ; // if a number gives remainder 0 for a given input n and also if it has a common factor as well then it becomes non co prime with n. The common factor part is being checked by the nested for loop as it iterate for all j's less than i which we want to check.
      }
    }
   } 
    no_of_coprime = (n-1) - (non_coprime); 
 // Mersenne Prime 
int mersenne , prime = 1;
  if(n == 1){
    mersenne = 0; //if n = 1 mersenne is 0 
  } else{
 for(int i = 2 ; i <n ; i++ ){
   if(n%i == 0){
     mersenne = 0 ;
     prime = 0;
     break; //first condition is if a number is not a prime number then it automatically fails to be a mersenne number
   }
 } // now if it is prime, we want to check for the form 2^x - 1 
  if(prime != 0){
     int quotient = n+1, remainder_mersenne; 
     for(;quotient >=0;){
      remainder_mersenne = quotient%2 ;
      quotient = (quotient - (remainder_mersenne))/2 ; // we are changing the quotient at each iteration of the loop using divident = divisor*quotient + remainder
        if(remainder_mersenne!= 0 && quotient != 0){
          mersenne = 0 ;
          break; // if for a number remainder from 2 becomes non zero at any point of division, then it is not mersene 
          //and if the remainder at the final iteration is one along with quotient also being 0 then it is mersenne
        }
       if(remainder_mersenne==1 && quotient == 0){
         mersenne = 1;
         break;}
      }
  } 
  }
    printf("(%d,%d,%d)\n", set_bits,no_of_coprime, mersenne);
  }
  return 0 ;
}
