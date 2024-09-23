#include <stdio.h>

int analyseScore(int chessboard[8][8]) {
  // write your code here
  int countW = 0;
  int countB = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      int a = 0;
      a = chessboard[i][j] % 10;
      if (a == 1) {
        int b = 0;
        b = (chessboard[i][j] / 10);

        if (b == 2)
          countW += 5;
        else if (b == 3)
          countW += 3;
        else if (b == 4)
          countW += 3;
        else if (b == 5)
          countW += 9;
        else if (b == 6)
          countW += 0;
        else if (b == 1)
          countW += 1;
        // white lost = 39 - countW;

      } else if (a == 2) {
        int b = 0;
        b = (chessboard[i][j] / 10);
        if (b == 1)
          countB += 1;
        else if (b == 3)
          countB += 3;
        else if (b == 4)
          countB += 3;
        else if (b == 5)
          countB += 9;
        else if (b == 6)
          countB += 0;
        else if (b == 2)
          countB += 5;

        // black lost = 39 - countB
      }
    }
  }
  return countB - countW;
}