#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the count of the arguments
 * @argv: the array of the arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
