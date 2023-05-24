#include "shell.h"

void simple_shell(void) {
    char cmd[MAXLINE];
    int status;

    while (1) {
        printf("#cisfun$ ");
        if (fgets(cmd, MAXLINE, stdin) == NULL) {
            /* Handle Ctrl+D (EOF) */
            printf("\n");
            exit(0);
        }
        cmd[strlen(cmd) - 1] = '\0';  /* Remove trailing newline */

        status = execute_command(cmd);
        if (status != 0) {
            printf("./shell: No such file or directory\n");
        }
    }
}
