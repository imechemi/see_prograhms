#include<string.h>
#include<stdio.h>


int main() {
  char s1[100] = "blue";
  char ans[100];
  puts("What's the secret?");
  gets(ans);

  if (strcmp(s1, ans) == 0) {
    puts("You guessed it right!");
  } else {
    puts("Wrong!");
  }
  return 0;
}