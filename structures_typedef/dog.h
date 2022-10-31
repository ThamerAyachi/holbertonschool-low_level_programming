#ifndef _MAIN_H
#define _MAIN_H

/**
 * struct dog - dog struct
 *
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: Dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
