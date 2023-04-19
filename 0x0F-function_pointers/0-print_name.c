#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: the name to be printed
 * @f: the function to call
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}