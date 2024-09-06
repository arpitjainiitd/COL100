#include <stdio.h>

int main(void) {
  // Write your code here
  int no_of_queries, q;
  scanf("%d", &no_of_queries);
for(int i = 1; i<= no_of_queries; i++){
  scanf("%d", &q);
  if(q == 1){
  // Query 1
  long long int a1, b1, c1 ,n, X, flag = 0;
  scanf("%lld %lld %lld", &a1, &b1, &c1);
  for (n = 0;; n++) {
    X = a1 * n * n + b1 * n + c1;
    if (X == 1) { //exclusive case 
      printf("%lld\n", n);
      break;
    }
    for (int i = 2; i < X; i++) { // Checking prime
      if (X % i == 0) {
        flag = 1;
        printf("%lld\n", n);
        break;
      }
    }
    if (flag == 1) {
      break;
    }
  }
  } else if (q == 2){
  // Query 2

  long long int a2, b2, Y, count2 = 0;
  scanf("%lld %lld", &a2, &b2);
  for (int n = 1;; n++) {
    Y = (n * (n + 1)) / 2;
    if (a2 <= Y && Y <= b2) {
      count2++;
    }
    if (Y > b2) {
      break;
    }
  }
  printf("%lld\n", count2);
  } else if(q == 3){
  // Query 3

  long long int a3, b3, count3 = 0;
  scanf("%lld %lld", &a3, &b3);
  for (int i = a3; i <= b3; i++) {
    if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
      count3++;
    }
  }
  printf("%lld\n", count3);
  } else if( q== 4){
  // Query 4
  long long int a4, b4, count4, max, min;
  scanf("%lld %lld", &a4, &b4);
  int arr_sets[(b4 - a4) + 1], arr_number[(b4 - a4) + 1];
  for (int i = a4, j = 0; i <= b4; i++, j++) {
    count4 = 0;
    int p = i;
    for (int remainder;;) {
      remainder = p % 2;
      if (remainder == 1) {
        count4++;
      }
      p = (p - remainder) / 2;
      if (p == 0) {
        break;
      }
    }
    arr_sets[j] = count4;
    arr_number[j] = i;
  }
  int index_max = 0, index_min = 0;
  min = arr_sets[0]; // assuming the lower has the min and max and check
  max = arr_sets[0];

  for (int i = 1; i <= (b4 - a4); i++) {
    if (arr_sets[i] > max) {
      max = arr_sets[i];
      index_max = i;
    }
    if (arr_sets[i] < min) {
      min = arr_sets[i];
      index_min = i;
    }
  }
  printf("%d  %d\n", arr_number[index_min], arr_number[index_max]);
}
}

  
  return 0;
}
