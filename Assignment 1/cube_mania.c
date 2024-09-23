#include <stdio.h>
// Given a large solid metallic cuboid, we wish to extract out smaller cubes
// from it and perform some basic operations. You will be given a length,
// breadth, and height of the cuboid as inputs. As part of this task you will:
// • compute and print the volume of the cuboid
// • considering a two-unit length cube, calculate the number of cubes that can
// be part of this cuboid. • How much more surface area does the cubes have
// compared to the cuboid. Please print the outputs of all three questions
// within the same file following the the given sample input/sample output
// formatting:

// Sample Input
// 10 10 10
// Sample Output
// 1000 125 2400

int main(void) { 

  int length, breadth, height ; 
  scanf("%d %d %d", &length, &breadth, &height);
  int volume = length*breadth*height;
  int cubes = volume/8 ;
  printf("%d %d %d", volume, cubes , cubes*24 - 2*(length*breadth + breadth*height + height*length) );

 
  return 0; }
