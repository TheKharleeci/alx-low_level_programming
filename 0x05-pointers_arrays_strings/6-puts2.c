#include "main.h"

/**
 * puts2 - prints everyother character of a string
 *
 * @str: the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
