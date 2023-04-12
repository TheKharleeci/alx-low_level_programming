#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array
 * @size: the array size
 * @c: the character to initialize with
 *
 * Return: Null or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	array[0] = c;
	return (array);
}
