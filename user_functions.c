#include "shell.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination pointer;
 * @src: pointer to string
 *
 * Return: returns a character
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strncpy - copies a string
 *
 * @dest: destination sring
 * @src: source string
 * @n: max no. of chars to be copied
 *
 * Return: returns a character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy chars from src to dest up to n or \0*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
/**
 * _strdup - duplicates string
 * @str: string to duplicate
 * Return: returns char
 */
char *_strdup(char *str)
{
	char *duplicate = NULL;
	size_t length;

	if (str != NULL)
	{
		length = _strlen(str);
		duplicate = malloc((length + 1) * sizeof(char));
		if (duplicate == NULL)
			return (NULL);
		_strcpy(duplicate, str);
	}
	return (duplicate);
}
/**
 * _strcpy - copies string
 * @dest: dest str
 * @src: sourc str
 * Return: pointer to string
 */

char *_strcpy(char *dest, const char *src)
{
	/*char *original_destination = destination;*/
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcmp - compares two strings
 *
 * @s1: first pointer to a string
 * @s2: second pointer to a string
 *
 * Return: returns an integer
 */
int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
	{
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}

