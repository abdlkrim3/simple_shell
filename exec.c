#include "shell.h"

int execute_command(char *cmd) {
    pid_t pid;
    int status;
    char *argv[2];

    argv[0] = cmd;
    argv[1] = NULL;

    pid = fork();
    if (pid == -1) {
        perror("fork");
        return -1;
    }

    if (pid == 0) {
        /* Child: execute the command */
        if (execve(cmd, argv, NULL) == -1) {
            return -1;
        }
    } else {
        /* Parent: wait for child to finish */
        waitpid(pid, &status, 0);
    }

    return 0;
}
