#include <stdio.h>

int main(void) {
  // Write your code here
  int incorrect_pin, no_of_commands, input_direction, input_distance, final_x,final_y, given_x, given_y, negative_x = 0, positive_x = 0, negative_y = 0,positive_y = 0;

  scanf("%d %d", &incorrect_pin, &no_of_commands);
  //particular case for 0
  if(no_of_commands == 0){
    printf("%d%d%d%d\n",(incorrect_pin) % 10,(incorrect_pin / 10)%10,
 (incorrect_pin / 100) % 10, (incorrect_pin / 1000));
    printf("1\n");
    return 0;
  }
  int arrDirection[no_of_commands], arrDistance[no_of_commands];

  for (int i = 0; i <= (no_of_commands - 1); i++) {
    scanf("%d %d", &input_direction, &input_distance);
    arrDirection[i] = input_direction;
    arrDistance[i] = input_distance;
    if (i == (no_of_commands - 1)) {
      scanf("%d %d", &given_x, &given_y);
    }
  }
  int N, S, E, W;
  
  // Digit Revrsal Check
  
  N = (incorrect_pin) % 10;
  S = (incorrect_pin / 10) % 10;
  E = (incorrect_pin / 100) % 10;
  W = (incorrect_pin / 1000);

  for (int i = 0; i <= (no_of_commands - 1); i++) {
    if (arrDirection[i] == N) {
      positive_y += arrDistance[i];
    } else if (arrDirection[i] == S) {
      negative_y += arrDistance[i];
    } else if (arrDirection[i] == E) {
      positive_x += arrDistance[i];
    } else if (arrDirection[i] == W) {
      negative_x += arrDistance[i];
    }
  }
  final_x = (positive_x - negative_x);
  final_y = (positive_y - negative_y);
  if (final_x == given_x && final_y == given_y) {
    printf("%d%d%d%d\n", N, S, E, W);
    printf("1\n");
    return 0;
  }
  final_x = 0, final_y = 0, negative_x = 0, positive_x = 0, negative_y = 0,
  positive_y = 0;
  
  // Pairwise Reversal Check

  N = (incorrect_pin / 100) % 10;
  S = (incorrect_pin / 1000);
  E = (incorrect_pin) % 10;
  W = (incorrect_pin / 10) % 10;

  for (int i = 0; i <= (no_of_commands - 1); i++) {
    if (arrDirection[i] == N) {
      positive_y += arrDistance[i];
    } else if (arrDirection[i] == S) {
      negative_y += arrDistance[i];
    } else if (arrDirection[i] == E) {
      positive_x += arrDistance[i];
    } else if (arrDirection[i] == W) {
      negative_x += arrDistance[i];
    }
  }
  final_x = (positive_x - negative_x);
  final_y = (positive_y - negative_y);
  if (final_x == given_x && final_y == given_y) {
    printf("%d%d%d%d\n", N, S, E, W);
    printf("2\n");
    return 0;
  }
  final_x = 0, final_y = 0, negative_x = 0, positive_x = 0, negative_y = 0,
  positive_y = 0;
  
  // Forward Cyclic Movement Check
 
  N = (incorrect_pin / 100) % 10; 
  S = (incorrect_pin / 10) % 10;  
  E = (incorrect_pin) % 10;       
  W = (incorrect_pin / 1000);

  for (int i = 0; i <= (no_of_commands - 1); i++) {
    if (arrDirection[i] == N) {
      positive_y += arrDistance[i];
    } else if (arrDirection[i] == S) {
      negative_y += arrDistance[i];
    } else if (arrDirection[i] == E) {
      positive_x += arrDistance[i];
    } else if (arrDirection[i] == W) {
      negative_x += arrDistance[i];
    }
  }
  final_x = (positive_x - negative_x);
  final_y = (positive_y - negative_y);
  if (final_x == given_x && final_y == given_y) {
    printf("%d%d%d%d\n", N, S, E, W);
    printf("3\n");
    return 0;
  }
  final_x = 0, final_y = 0, negative_x = 0, positive_x = 0, negative_y = 0,
  positive_y = 0;
  
  // Reverse Cyclic Movement Check
  
  N = (incorrect_pin) % 10;
  S = (incorrect_pin / 1000);
  E = (incorrect_pin / 100) % 10;
  W = (incorrect_pin / 10) % 10; 

  for (int i = 0; i <= (no_of_commands - 1); i++) {
    if (arrDirection[i] == N) {
      positive_y += arrDistance[i];
    } else if (arrDirection[i] == S) {
      negative_y += arrDistance[i];
    } else if (arrDirection[i] == E) {
      positive_x += arrDistance[i];
    } else if (arrDirection[i] == W) {
      negative_x += arrDistance[i];
    }
  }
  final_x = (positive_x - negative_x);
  final_y = (positive_y - negative_y);
  if (final_x == given_x && final_y == given_y) {
    printf("%d%d%d%d\n", N, S, E, W);
    printf("4\n");
    return 0;
  }
  return 0;
}


