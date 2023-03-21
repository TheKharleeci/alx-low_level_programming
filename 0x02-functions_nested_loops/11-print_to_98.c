#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural number in a given range
 * @n: the start of the range
 * Returns: void
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
}
