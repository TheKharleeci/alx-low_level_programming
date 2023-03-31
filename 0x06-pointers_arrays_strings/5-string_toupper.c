#include "main.h"

/**
 * string_toupper - function that converts a string to uppercase
 * @str: the string to be converted
 *
 * Return: char
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (s)
}
