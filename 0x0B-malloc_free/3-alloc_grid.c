#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dim array of ints
 * @width: the array width
 * @height: the array height
 *
 * Return: NULL or a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int length, i, j, **arr;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	length = width * height;
	arr = malloc(length * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
