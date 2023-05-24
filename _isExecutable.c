#include "shell.h"

/**
 * _isExecutable - checks if file is executable
 * @s: pointer to command
 * Return: returns 1 if execuatble and o otherwise
 */
int _isExecutable(char *s)
{
	struct stat my_file;

	if (stat(s, &my_file) == 0)
	{
		if (S_ISREG(my_file.st_mode) && (my_file.st_mode & S_IXUSR))
			return (1);
	}
	return (0);
}
