#include "main.h"

/**
 * reverse_array - reverses a given array
 *
 * @a: the array to be reversed
 * @n: the size of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, i, j, mid_point;

	mid_point = (int)(n / 2);

	i = 0;
	j = n - 1;

	while (i < mid_point)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
