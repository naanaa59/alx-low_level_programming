#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a  struct dog
 *
 * @d: the structure dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == 0 || d->age == 0 || d->owner == 0)
		printf("nil");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

