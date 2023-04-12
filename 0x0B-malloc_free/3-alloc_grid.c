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
	int i, **arr;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
