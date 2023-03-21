#include "main.h"

/**
 * times_table - Prints the nine times table
 * Returns: 0
 */
void times_table(void)
{
	int num, multiple, product;

	for (num = 0; num < 10; num++)
	{
		_putchar('0');

		for (multiple = 1; multiple < 10; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			product = num * multiple;

			if (product < 10)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
