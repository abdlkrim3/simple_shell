#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {
        printf("I'm the parent. Child PID: %d\n", pid);
    } else if (pid == 0) {
        printf("I'm the child.\n");
    } else {
        printf("Fork failed.\n");
    }

    return 0;
}
