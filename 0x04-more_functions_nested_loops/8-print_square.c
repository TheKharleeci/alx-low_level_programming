#include "main.h"

/**
 * print_square - Prints a square.
 * @size: The size of the square.
 *
 * Return: 0
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	return (0);
}