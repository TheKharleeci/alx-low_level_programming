#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int *mem;
	int diff, i, j;

	if (min > max)
	{
		return (NULL);
	}
	diff = max - min;

	mem = malloc(diff * sizeof(int) + 1);

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = min, j = 0; i <= max && j < diff; i++, j++)
	{
		mem[j] = i;
	}

	return (mem);
}
