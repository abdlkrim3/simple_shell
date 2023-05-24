#include "shell.h"

/**
 * _strlen - returns length of a string
 *
 * @s: pointer to a string
 * Return: returns length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _putString - prints a string
 * @str: string to print
 */
void _putString(char *str)
{
	int i = 0;

	if (str == NULL)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * _strncmp - compares 2 strings
 * @str1: first string
 * @str2: second string
 * @n: len to compare
 * Return: 0 if equal
 */
int _strncmp(char *str1, char *str2, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		else if (str1[i] == '\0')
			return (0);
	}
	return (0);
}
