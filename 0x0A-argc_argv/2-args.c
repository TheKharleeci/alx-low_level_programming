#include <stdio.h>

/**
 * main - prints all the arguments
 * @argc: the count of the arguments
 * @argv: the array of the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
