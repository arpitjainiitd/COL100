#include <stdio.h>
int maxElement(int arr3[], int size);
int dectobin(int dec);
int rowcalc(int N);

int main(void) {

  // Write your code here
  int queries, query_no;
  scanf("%d", &queries);
  for (int i = 0; i < queries; i++) {
    scanf("%d", &query_no);
    
    // Query 1
    if (query_no == 1) {
      int n1, k, score = 0;
      scanf("%d %d", &n1, &k);
      int arr[n1];
      for (int i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
      }
      int temp = 0; // sorting the array in descending order
      for (int i = 0; i < n1; i++) {
        for (int j = i + 1; j < n1; j++) {
          if (arr[i] < arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
          }
        }
      }
      for (int i = 0; i < k; i++) {
        score = score + arr[i];
      }
     printf("%d\n", score);
    }

    // Query 2
    if (query_no == 2) {
      int n2, m2;
      scanf("%d %d", &n2, &m2);
      int arr1[n2], arr2[m2];
      for (int i = 0; i < n2; i++) {
        scanf("%d", &arr1[i]);
      }
      for (int i = 0; i < m2; i++) {
        scanf("%d", &arr2[i]);
      }
      // Merging both arrays
      int arr_f[n2 + m2];
      for (int i = 0; i < (n2); i++) {
        arr_f[i] = arr1[i];
      }
      for (int i = n2, j = 0; j < m2; i++, j++) {
        arr_f[i] = arr2[j];
      }
      // Sorting the merged array in ascending order
      int temp1 = 0;
      for (int i = 0; i < (n2 + m2); i++) {
        for (int j = i + 1; j < (n2 + m2); j++) {
          if (arr_f[i] > arr_f[j]) {
            temp1 = arr_f[i];
            arr_f[i] = arr_f[j];
            arr_f[j] = temp1;
          }
        }
      }
      for (int i = 0; i < (n2 + m2); i++) {
        printf("%d ", arr_f[i]);
      }
      printf("\n");
    }

    // Query 3
    if (query_no == 3) {
      int n3;
      scanf("%d", &n3);
      int arr3[n3];
      for (int i = 0; i < n3; i++) {
        scanf("%d", &arr3[i]);
      }
      int temp = maxElement(arr3, n3);
      int binOFtemp = dectobin(temp);
      int rows = rowcalc(binOFtemp);

      int matrix[rows][n3];

      // initialising each element of matrix as zero first
      for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n3; j++) {
          matrix[i][j] = 0;
        }
      }

      int num, num_bin, digits;
      
      //  Extracting the binary digit for each element and putting at the correct place in the matrix using loops
      
      for (int j = 0; j < n3; j++) {
        num = arr3[j];
        num_bin = dectobin(num);
        digits = rowcalc(num_bin);
        for (int i = (rows - 1); i >= 0; i--) {
          matrix[i][j] = (num_bin) % 10;
          num_bin = (num_bin) / 10;
        }
      }
        for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n3; j++) {
          printf("%d ", matrix[i][j]);
        }
        printf("\n");
      }
    }
    }
  return 0;
}

int maxElement(int arr3[], int size) {
  int max = arr3[0];
  for (int i = 1; i < size; i++) {
    if (arr3[i] > max) {
      max = arr3[i];
    }
  }
  return max;
}
int dectobin(int dec) {
  int N = 0, x = dec;
  int base = 1;
  while (x > 0) {
    int rem = x % 2;
    N = N + rem * base;
    x = (x - rem) / 2;
    base = base * 10;
  }
  return N;
}
int rowcalc(int N) {
  int count = 0;
  while (N > 0) {
    N = N / 10;
    count++;
  }
  return count;
}