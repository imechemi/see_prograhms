#include<stdio.h>

int main() {
  int nums[2][3]  =  { {16, 18, 20}, {25, 26, 27} };


  printf("%p\n", nums);
  printf("%d\n", *nums);
  return 0;
}