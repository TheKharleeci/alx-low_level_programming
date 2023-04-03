#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: the string
 * @c: the character to locate
 *
 * Return: char (a pointer to the first occurence of the string)
 */

char *_strchr(char *s, char *c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s[i]);
		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}

	return (NULL);
}
