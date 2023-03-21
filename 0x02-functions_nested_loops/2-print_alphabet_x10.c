#include "main.h"

/**
 * main- Entry point
 * Description: prints the alphabet 10 times
 *
 * Return- Always 0 (success)
 */
int main(void)
{
	print_alphabet_x10()
	{
		int i;
		int j;

		for (i = 0; i <= 10; i++)
		{
			for (j = 'a'; j <= 'z'; j++)
			{
				_putchar(j);
			}
			_putchar('\n');
		}
	}

	return (0);
}
