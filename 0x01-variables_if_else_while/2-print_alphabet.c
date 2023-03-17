#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	putchar(10);

	return (0);
}
