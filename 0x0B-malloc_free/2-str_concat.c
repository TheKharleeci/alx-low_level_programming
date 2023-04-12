#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL or a pointer to the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len3, i;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (*(s1 + len1) != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}
	len3 = len1 + len2;
	s3 = malloc(len3 * sizeof(char) + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s3[i + len1] = s2[i];
	}
	s3[len2 + len1] = '\0';

	return (s3);
}
