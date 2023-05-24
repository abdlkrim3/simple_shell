#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {
        int status;
        waitpid(pid, &status, 0);
        printf("Child finished.\n");
    } else if (pid == 0) {
        printf("I'm the child, now exiting.\n");
    } else {
        printf("Fork failed.\n");
    }

    return 0;
}
