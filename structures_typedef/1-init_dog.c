#include "dog.h"

/**
 * init_dog - Entry point
 *
 * @d: struct dog
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: 'set values.'
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
