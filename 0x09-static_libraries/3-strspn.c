#include "main.h"

/**
 * _strspn - function that compares two strings
 *
 * @s: first string
 * @accept: second string
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int first_str_len = 0;
	int second_str_len = 0;
	int min_len;

	while (s1[first_str_len])
	{
		first_str_len++;
	}

	while (s2[second_str_len])
	{
		second_str_len++;
	}
	if (second_str_len <= first_str_len)
		min_len = second_str_len;
	else
		min_len = first_str_len;
	for (i = 0; i < min_len; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
