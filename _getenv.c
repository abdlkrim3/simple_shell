#include "shell.h"
/**
 * _getenv - gets environment variable
 * @name: name of env variable)
 * Return: pointer to env value
 */

char *_getenv(char *name)
{
	char **env = NULL;
	size_t len = _strlen(name);

	if (name == NULL || environ == NULL)
	{
		return (NULL);
	}

	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, name, len) == 0 && (*env)[len] == '=')
			return (*env + len + 1);
	}
	return (NULL);
}
