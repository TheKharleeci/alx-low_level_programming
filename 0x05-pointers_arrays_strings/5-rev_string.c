#include "main.h"

/**
 * rev_string - reverses a given string
 *
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int strlen, i, j, mid;
	char temp;

	strlen = 0;

	while (s[strlen])
	{
		strlen++;
	}
	mid = (int)(strlen / 2);

	i = 0;
	j = strlen - 1;

	while (i < mid)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
