#include "main.h"
#define NULL 0

/**
 * _strchr -  function that locates a character in a string
 * @s: the string
 * @c: the character to locate
 * Return: char (the first occurence of c)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
		i++;
	}

	return (NULL);
}
