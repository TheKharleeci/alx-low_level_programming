#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	int midpoint;
	int right = 0;
	int strlen = 0;
	int left = 0;

	while (s[strlen])
	{
		strlen++;
	}
	midpoint = strlen / 2;
	right = strlen - 1;

	while (left < midpoint)
	{
		if (s[left] == s[right])
		{
			left++;
			right--;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
