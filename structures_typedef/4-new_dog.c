#include "dog.h"

/**
 * new_dog - Entry point
 *
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: 'create new dog.'
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->age = age;
	dog->name = name;
	dog->owner = owner;

	return (dog);
}
