#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: the string
 * @c: the character to locate
 *
 * Return: char (a pointer to the first occurence of the string)
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

