#include "main.h"

/**
 * swap_int - a function that swaps values of its params
 *
 * @a: first param
 * @b: second param
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
