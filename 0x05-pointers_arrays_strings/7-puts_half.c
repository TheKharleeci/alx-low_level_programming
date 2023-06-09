#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int strlen = 0;
	int start_point, i;

	while (str[strlen])
	{
		strlen++;
	}

	if (strlen % 2 != 0)
		start_point = (strlen + 1) / 2;
	else
		start_point = strlen / 2;

	for (i = start_point; i < strlen; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
