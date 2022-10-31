#include "dog.h"

/**
 * free_dog - free
 *
 * @d: dog_t
 *
 * Description: 'Free dog_t'
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
