#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 *
 * @dest: the buffer
 * @src: the string
 *
 * Return: char- the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';

	return (dest);
}
