#include "shell.h"
/**
 * main - entry of the program
 * @argc: argument count
 * @argv: argument vector
 * @env: environment variable
 * Return: 0 for success
 */

int main(int argc, char *argv[], __attribute__((unused))char **env)
{
	char *line = NULL;
	ssize_t linelen;
	size_t bufsize;

	if (argc > 1)
		handle_error(argv);
	while (1)
	{
		if (isatty(STDOUT_FILENO))
		{
			_putString("$ ");
			linelen = getline(&line, &bufsize, stdin);
			if (linelen == -1)
			{
				_putchar('\n');
				free(line);
				exit(EXIT_FAILURE);
			}
			if (line[linelen - 1] == '\n')
				line[linelen - 1] = 0;
			if (_strcmp(line, "exit") == 0)
				exit(EXIT_SUCCESS);
			if (linelen == 1)
				continue;
			/*if (_strcmp(line, "env") == 0)*/
				/*_printEnv();*/
			simple_shell(line, linelen, argv);
		}
		}
		free(line);
		return (0);
	}
