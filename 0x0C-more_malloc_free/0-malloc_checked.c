#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size of the memory
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b * sizeof(int));
	if (mem == NULL)
	{
		exit(98);
		return (0);
	}

	return (mem);

}
