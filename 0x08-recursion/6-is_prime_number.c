#include "main.h"

/**
 * check_prime_number - evaluates a prime number
 *
 * @n: a number
 * @i: base division
 *
 * Return: int (1 if n is a prime number, 0 otherwise)
 */
int check_prime_number(int n, int i)
{
	if (n == 0 || n == 1)
	{
		return (0);
	}
	if (i < n / 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (check_prime_number(n, i + 1));
		}
	}

	return (1);
}

/**
 * is_prime_number - check if a number is prime
 * @n: number to check
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (check_prime_number(n, 2));
}
