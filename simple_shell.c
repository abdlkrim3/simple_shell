#include "shell.h"

/**
 * simple_shell - simple unix interpreter
 * Return: returns 0 for success
 * @line: user input from getline
 * @argv: array of strings to main
 * @linelen: lenth of user input
 */
<<<<<<< HEAD
int main(void)
{
	char command[MAX_COMMAND_LENGTH];
	char prompt[] = "#cisfun$ ";

	while (1)
	{
		printf("%s", prompt);
		if (fgets(command, sizeof(command), stdin) == NULL)
		{
			if (feof(stdin))
			{
				printf("\n");
				break;
			}
			else
			{
				perror("fgets");
				exit(EXIT_FAILURE);
			}
		}
		command[strcspn(command, "\n")] = '\0';
		char *token = strtok(command, " ");
		if (token == NULL)
=======

int simple_shell(char *line, ssize_t linelen, char **argv)
{
	char *token = NULL, *str = NULL;
	char *my_comm[MAX_ARGS] = {NULL};
	int i = 0, count = 0, j = 0;

		str = malloc(sizeof(char *) * (linelen + 100));
		if (str == NULL)
			return (-1);
		_strcpy(str, line);
		token = strtok(line, " ");
		_strcpy(str, line);
		while (token != NULL)
>>>>>>> 3c9cadebe6abaa166ad9f19a10e01bd6b71084a5
		{
			count++;
			token = strtok(NULL, " ");
		}
<<<<<<< HEAD

		pid_t pid = fork();
		if (pid < 0)
=======
		if (count == 0)
>>>>>>> 3c9cadebe6abaa166ad9f19a10e01bd6b71084a5
		{
			free(str);
			return (0);
		}
<<<<<<< HEAD
		else if (pid == 0)
=======
		token = strtok(str, " ");
		while (token != NULL)
>>>>>>> 3c9cadebe6abaa166ad9f19a10e01bd6b71084a5
		{
			my_comm[i] = malloc(sizeof(char) * (_strlen(token) + 100));
			if (my_comm[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(my_comm[j]);
				free(str);
				return (-1);
			}
			_strcpy(my_comm[i], token);
			token = strtok(NULL, " "), i++;
		}
<<<<<<< HEAD
		else
		{
			int status;
			waitpid(pid, &status, 0);
			printf("\n");
		}

		if (access(token, F_OK) == -1)
		{
			printf("Command '%s' not found\n", token);
		}
	}
	return (0);
=======
		my_comm[i] = NULL;
		fork_process(my_comm, argv);
		for (i = 0; i < count; i++)
			free(my_comm[i]);
		free(str);
		return (0);
>>>>>>> 3c9cadebe6abaa166ad9f19a10e01bd6b71084a5
}
