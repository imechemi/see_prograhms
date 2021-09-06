#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
  pid_t pid;

  pid = fork();
  
  if (pid == 0) {
  	execlp("/bin/ls", "ls", NULL);
  } else {
    pid = wait(NULL);
    printf("Returned pid = %u\n", pid);
    printf("Child Complete");
  }
	return 0;
}
