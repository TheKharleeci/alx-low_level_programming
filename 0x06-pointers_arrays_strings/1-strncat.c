#include "main.h"

/**
 * _strncat - function that concatenates two strings to a limit
 *
 * @dest: first string
 * @src: second string
 * @n: the number of bytes from src
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int strlen = 0;
	int i;

	while (dest[strlen])
	{
		strlen++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[strlen] = src[i];
		strlen++;
	}
	dest[strlen] = '\0';

	return (dest);
}
