#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: the structure dog
 *
 * @name: the name
 *
 * @age: the age
 *
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
