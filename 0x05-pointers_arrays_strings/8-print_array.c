#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 *
 * @a: the array to be printed
 * @n: the number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;
	int arr_length = 0;

	while (a[arr_length])
	{
		arr_length++;
	}

	while (i < n && i < arr_length)
	{
		if (i == (n - 1) || i == (arr_length - 1))
		{
			printf("%d ", a[i]);
			break;
		}
		printf("%d, ", a[i]);
		i++;
	}
}
