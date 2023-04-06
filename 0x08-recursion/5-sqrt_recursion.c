#include "main.h"

/**
 * find_sqrt - evaluates the square root of a number
 * @n: the number to evaluate
 * @start: the start point
 * @end: the end point
 * Return: int
 */
int find_sqrt(int n, int start, int end)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}
		if (mid * mid < n)
		{
			return (find_sqrt(n, mid + 1, end));
		}
		else
		{
			return (find_sqrt(n, start, mid - 1));
		}
	}
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number
 *
 * Return: int (the square root of n or -1)
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (find_sqrt(n, 0, n));
}
