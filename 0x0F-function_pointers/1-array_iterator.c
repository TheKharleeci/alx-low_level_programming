#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - performs an operation on array elements
 * @array: the array
 * @size: size of the array
 * @action: the action to be performed on the array elements
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
