#include <stdio.h>

int main(void) {
  // Write your code here
  int direction, no_of_commands, input_direction, input_distance,
      total_distance = 0, negative_x = 0, positive_x = 0, negative_y = 0,
      positive_y = 0, net_x_coordinate, net_y_coordinate, quadrant;
  scanf("%d %d", &direction, &no_of_commands);
  // assigning directions to their respective values
  int N = (direction / 1000) % 10;
  int S = (direction / 100) % 10;
  int E = (direction / 10) % 10;
  int W = (direction) % 10;
  // the loop should run for n times where n is the number of commands given
  for (int counter = 1; counter <= no_of_commands; counter++) {
    scanf("%d %d", &input_direction, &input_distance);
    total_distance += input_distance;
    // net y coordinate is calculated by N and S direction and x by E and W
    if (input_direction == N) {
      positive_y += input_distance;
    } else if (input_direction == S) {
      negative_y += input_distance;
    } else if (input_direction == E) {
      positive_x += input_distance;
    } else if (input_direction == W) {
      negative_x += input_distance;
    }
    net_y_coordinate = (positive_y) - (negative_y);
    net_x_coordinate = (positive_x) - (negative_x);
// for quadrant we simply compare the final x and y coordinates
    if (net_x_coordinate > 0 && net_y_coordinate > 0) {
      quadrant = 1;
    } else if (net_x_coordinate < 0 && net_y_coordinate > 0) {
      quadrant = 2;
    } else if (net_x_coordinate < 0 && net_y_coordinate < 0) {
      quadrant = 3;
    } else if (net_x_coordinate > 0 && net_y_coordinate < 0) {
      quadrant = 4;
    } else if (net_x_coordinate == 0 || net_y_coordinate == 0) {
      quadrant = -1;
    }
  }
  printf("%d\n", total_distance);
  printf("(%d,%d)\n", net_x_coordinate, net_y_coordinate);
  printf("%d\n", quadrant);
  return 0;
}