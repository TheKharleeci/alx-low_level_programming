#include "main.h"

/**
 * print_last_digit - Function to return the last digit of an int.
 * @n: int whose last digit we need to check
 * Return: Last digit of the int
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
