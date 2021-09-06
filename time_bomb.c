#include<stdio.h>
#include<time.h>

void wait(int seconds) {
  clock_t end_wait;

  end_wait = clock() + seconds * CLOCKS_PER_SEC;

  while (clock() < end_wait) {};
}


int main() {
  time_t sec;
  sec = time(NULL);

  printf("No. of house elapsed since 1st Jan, 1970: %ld\n", sec/3600);
  printf("%s", ctime(&sec));

  printf("Start wait\n");
  wait(5);
  printf("End wait\n");
}