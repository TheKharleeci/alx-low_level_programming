#include "main.h"

/**
 * print_alphabet- Entry point
 * Description: prints the alphabets in lower case
 *
 * returns- void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
