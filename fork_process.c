#include "shell.h"
/**
 * fork_process - forks and exectes new process
 * @argv: array of arguments
 * @args: arg to c
 * Return: 0 on success
 */
int fork_process(char **args, char **argv)
{
	char *comm = args[0];
	pid_t my_pid;
	char **envp = environ;
	char *str2 = NULL;
	int status;

	if (_isExecutable(args[0]) == 0)
	{
		str2 = search_file(args[0]);
		if (str2 == NULL)
		{
			file_error(argv);
			return (-1);
		}
		comm = str2;
	}
	my_pid = fork();
	if (my_pid == -1)
		exit(EXIT_FAILURE);
	else if (my_pid == 0)
	{
		execve(comm, args, envp);
	}
	else
		waitpid(my_pid, &status, 0);
	return (0);
}
