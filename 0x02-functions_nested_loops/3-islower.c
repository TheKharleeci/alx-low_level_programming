#include "main.h"

/**
 * _islower: checks if a number is ASCII lowercase
 * @c: the character to check
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
