#include "dog.h"

/**
 * print_dog - Entry point
 *
 * @d: struct dog
 *
 * Description: 'print values.'
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
		d->age ? printf("Age: %f\n", d->age) : printf("Age: %f\n", 0.000000);
		d->owner ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
	}
}
