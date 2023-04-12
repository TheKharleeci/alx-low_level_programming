#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated memory in space
 * @str: a string
 *
 * Return: Null or a pointer to memory
 */
char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *newStr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + length) != '\0')
	{
		length++;
	}

	newStr = malloc(length * sizeof(char) + 1);

	if (newStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		newStr[i] = str[i];
	}
	newStr[length] = '\0';

	return (newStr);
}
