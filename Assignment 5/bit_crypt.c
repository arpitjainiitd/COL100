#include <stdio.h>

// function encrypt
int xor(int a,int b){
  if((a+b) % 2 == 0){
    return 0;
  } else {
    return 1;
  }
}
int encrypt(int num, int key){
  if(num ==0|| key == 0 ){
    return 0;
  }
  int bit_n = num%2;
  int bit_key = key %2;
  return encrypt( (num/2), (key/2)) * 2 +xor(bit_n ,bit_key);
}


int main() {
    // Take the number and key as input
  int num,key;
  scanf("%d%d",&num,&key);
    // Encrypt the number
    printf("%d",encrypt(num,key));
    // Print the encrypted value

    return 0;
}