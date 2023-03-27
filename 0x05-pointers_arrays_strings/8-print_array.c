#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 *
 * @a: the array to be printed
 * @n: the number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d,", a[i]);
		i++;
	}

	_putchar('\n');
}
