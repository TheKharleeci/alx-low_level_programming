#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of the array
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *str;
	unsigned int i;

	if (nmeb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}
	str = mem;

	for (i = 0; i < nmemb * size; i++)
	{
		str[i] = 0;
	}

	return (mem);
}
