#include "shell.h"

/**
 * simple_shell - simple unix interpreter
 * Return: returns 0 for success
 * @line: user input from getline
 * @argv: array of strings to main
 * @linelen: lenth of user input
 */

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
		{
			count++;
			token = strtok(NULL, " ");
		}
		if (count == 0)
		{
			free(str);
			return (0);
		}
		token = strtok(str, " ");
		while (token != NULL)
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
		my_comm[i] = NULL;
		fork_process(my_comm, argv);
		for (i = 0; i < count; i++)
			free(my_comm[i]);
		free(str);
		return (0);
}
