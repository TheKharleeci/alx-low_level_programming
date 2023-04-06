#include "main.h"

/**
 * _pow_recursion - returns the value or a number raised to a power
 *
 * @x: a number
 * @y: the power
 *
 * Return: int(the power of x to y)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
