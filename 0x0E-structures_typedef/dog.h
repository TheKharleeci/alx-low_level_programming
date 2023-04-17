#ifndef DOG_H
#define DOG_H
int _putchar(char c);
/**
 * struct dog - dog struct
 * @name : dog name
 * @age : dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
