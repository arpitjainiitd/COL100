#include <stdio.h>
void printBoard(int chessboard[8][8]) {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      int a = 0;
      a = chessboard[i][j] % 10;

      if (a == 0) {
        printf(". ");
      } else if (a == 1) {
        int b = chessboard[i][j] / 10 + chessboard[i][j] % 10;
        if (b == 2)
          printf("P ");
        else if (b == 3)
          printf("R ");
        else if (b == 4)
          printf("N ");
        else if (b == 5)
          printf("B ");
        else if (b == 6)
          printf("Q ");
        else if (b == 7)
          printf("K ");
      } else if (a == 2) {
        int b = chessboard[i][j] / 10 + chessboard[i][j] % 10;
        if (b == 8)
          printf("k ");
        else if (b == 3)
          printf("p ");
        else if (b == 4)
          printf("r ");
        else if (b == 5)
          printf("n ");
        else if (b == 6)
          printf("b ");
        else if (b == 7)
          printf("q ");
      }
    }
    printf("\n");
  }
}
