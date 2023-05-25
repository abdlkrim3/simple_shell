#include "shell.h"

/**
 * search_file - searches executable file
 * @s: file to search
 * Return: path to full or NULL
 */

char *search_file(char *s)
{
	char *path, *my_str, *my_str2, *result, *path_copy, *token;
	char *buffer[MAX_ARGS] = { NULL };
	int y = 0, count = 0, j = 0, x = 0, i = 0;

	path = _getenv("PATH");
	if (path == NULL)
		return (NULL);
	path_copy = _strdup(path);
	my_str2 = malloc(sizeof(char) * _strlen(path_copy) + 1);
	_strcpy(my_str2, path_copy), token = strtok(path_copy, ":"), free(path_copy);
	while (token != NULL)
		count++, token = strtok(NULL, ":");
	token = strtok(my_str2, ":"), free(my_str2);
	while (token != NULL)
	{
		buffer[i] = malloc(sizeof(char) * (_strlen(token) + 1));
		if (buffer[i] == NULL)
		{
			for (y = 0; y < i; y++)
				free(buffer[y]);
			/*free(my_str2);*/
			return (NULL);
		}
		_strcpy(buffer[i], token);
		token = strtok(NULL, ":"), i++;
	}
	while (buffer[j] != NULL)
	{
		my_str = buffer[j], _strcat(my_str, "/"), _strcat(my_str, s);
		if (access(my_str, F_OK) == 0)
		{
			result = my_str;
			return (result);
		}
		j++;
	}
	for (x = 0; x < MAX_ARGS; x++)
		free(buffer[x]);
	return (NULL);
}
