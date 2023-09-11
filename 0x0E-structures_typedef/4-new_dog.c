#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: owner's name
 *
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_copy;

	new_dog_copy = malloc(sizeof(dog_t));
	if (new_dog_copy == NULL)
		return (NULL);

	new_dog_copy->name = malloc(strlen(name) + 1);
	new_dog_copy->owner = malloc(strlen(owner) + 1);

	if (new_dog_copy->name == NULL || new_dog_copy->owner == NULL)
	{
		free(new_dog_copy->name);
		free(new_dog_copy->owner);
		free(new_dog_copy);
		return (NULL);
	}

	strcpy(new_dog_copy->name, name);
	new_dog_copy->age = age;
	strcpy(new_dog_copy->owner, owner);
	return (new_dog_copy);
}
