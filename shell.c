#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#define MAX_CMD_LEN 1024
#define PROMPT "#cisfun$ "
/**
* main - simple UNIX command line interpreter
*
* Return: 0 on success, 1 on error
*/
int main(void)
{
char cmd[MAX_CMD_LEN];
char *args[] = {NULL, NULL};
int status;
while (1)
{
printf(PROMPT);
if (fgets(cmd, MAX_CMD_LEN, stdin) == NULL)
{
printf("\n");
exit(0);
}
cmd[strcspn(cmd, "\n")] = '\0';
args[0] = cmd;
if (fork() == 0)
{
execve(args[0], args, NULL);
fprintf(stderr, "./shell: No such file or directory\n");
exit(1);
}
else
{
wait(&status);
}
}
return (0);
}
