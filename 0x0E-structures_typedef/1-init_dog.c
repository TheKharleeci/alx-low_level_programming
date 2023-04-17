#include "dog.h"

/**
 * init_dog - initializes a variable of typr struct
 * @d: the dog struct
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
