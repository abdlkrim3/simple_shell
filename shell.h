#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>

#define MAXLINE 1024

void simple_shell(void);
int execute_command(char *cmd);

#endif /* _SHELL_H_ */

