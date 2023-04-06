#include "main.h"

/**
 * is_prime_number - evaluates a prime number
 *
 * @n: a number
 *
 * Return: int (1 if n is a prime number, 0 otherwise)
 */
int is_prime_number(int n)
{
	int i;

	i = 2;

	if (n == 0 || n == 1)
		return (0);
	if (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
		return (is_prime_number(n));
	}
}
