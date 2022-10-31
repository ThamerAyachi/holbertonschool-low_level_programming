#include "dog.h"

/**
 * strCheck - second function
 *
 * @str: string
 *
 * Description: 'set string'
 *
 * Return: string
 */
char *strCheck(char *str)
{
	int i = 0, j = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;

	p = malloc(i + 1);

	if (p == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		p[j] = str[j];
		j++;
	}

	p[j] = '\0';

	return (p);
}

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

	dog->name = strCheck(name);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = strCheck(owner);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	return (dog);
}
