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
	char *ptr;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = s[i];
			break;
		}
		i++;
		ptr = null;
	}

	return (ptr);
}
