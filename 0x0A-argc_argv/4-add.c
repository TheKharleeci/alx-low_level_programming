#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

/**
 * isPositive - checks if a number is a positive integer
 * @number: the argument
 * Return: true or false
 */
bool isPositive(char number[])
{
	unsigned int i = 0;

	if (atoi(number) < 1)
	{
		return (false);
	}

	for ( ; i < strlen(number); i++)
	{
		if (!isdigit(number[i]))
		{
			return (false);
		}
	}
	return (true);
}

/**
 * main - add positive numbers
 * @argc: the count of the arguments
 * @argv: the array of the arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 3)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isPositive(argv[i]))
			{
				printf("%s\n", "Error");
				return (1);
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
		return (0);
	}

	return (0);
}
