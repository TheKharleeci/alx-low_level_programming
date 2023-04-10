#include "main.h"
#define NULL 0

/**
 * _strpbrk -  function that locates a character in a string
 * @s: the string
 * @accept: the character to locate
 * Return: char (the first occurence of c)
 */
char *_strpbrk(char *s, char *accept)
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
