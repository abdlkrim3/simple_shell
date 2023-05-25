#include "shell.h"

/**
 * handle_error - handles argument errors
 * @argv: arguments of an array
 */
void handle_error(char **argv)
{
	char *s = ": 0: Can't open ";

	_putString(argv[0]);
	_putString(s);
	_putString(argv[1]);
	_putchar('\n');
	exit(EXIT_FAILURE);
}
/**
 * file_error - handles error for non executable files
 * @argv: arguments to main
 */
void file_error(char **argv)
{
	_putString(argv[0]);
	_putString(": No such file or directory\n");
	/*print_decimal(i);*/
	/*_put_String(": ");*/
	/*_put_String(args[0]);*/
	/*_put_String(": not found\n");*/
}
