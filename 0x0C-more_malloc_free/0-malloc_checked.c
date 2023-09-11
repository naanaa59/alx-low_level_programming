#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of the memory to allocate
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = (void *)malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
