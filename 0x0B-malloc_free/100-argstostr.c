#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: the argument count
 * @av: the arguments
 *
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char **result;
	int i;

	result = malloc(ac * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		result[i] = av[i];
	}

	return (result);
}
