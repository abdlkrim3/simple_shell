#include "shell.h"

/**
 * _putchar - returns sing character
 * @c: character to print
 * Return: returns int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
