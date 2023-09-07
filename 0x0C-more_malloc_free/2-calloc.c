#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of elements of the array
 *
 * @size: bytes of each elements
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	return (a);
}
