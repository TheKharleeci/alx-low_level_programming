#include "dog.h"

/**
 * init_dog - initializes a variable of type struct
 * @d: the dog struct
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
