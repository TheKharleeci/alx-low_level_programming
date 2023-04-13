#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes from s2 to be concatenated
 *
 * Return: NULL or a pointer to the concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2;
	unsigned int i;
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
	len2 = len1 + n;
	s3 = malloc(len2 * sizeof(char) + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		s3[i + len1] = s2[i];
	}
	s3[n + len1] = '\0';

	return (s3);
}
