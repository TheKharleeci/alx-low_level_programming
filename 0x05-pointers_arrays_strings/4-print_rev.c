#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}

	while (s[len - 1] >= 0)
	{
		_putchar(s[len - 1]);
		len--;
	}

	_putchar('\n');
}
