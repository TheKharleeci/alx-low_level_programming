#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: int
 */
int *_strcmp(char *s1, char *s2)
{
	int i;
	int first_str_len = 0;
	int second_str_len = 0;
	int max_len = first_str_len;

	while (s1[first_str_len])
	{
		first_str_len++;
	}

	while (s2[second_str_len])
	{
		second_str_len++;
	}
	if (second_str_len - first_str_len > 0)
		max_len = second_str_len;
	for (i = 0; i < max_len; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
