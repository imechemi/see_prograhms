#include<stdio.h>

struct Point {
  int x, y;
};

int main() {
  struct Point p1 = {1, 2};

  printf("x = %d, y = %d\n", p1.x, p1.y);
}