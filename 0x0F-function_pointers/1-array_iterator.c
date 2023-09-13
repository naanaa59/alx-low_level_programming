#include "function_pointers.h"
/**
 * array_iterator - executes a function as a parameter
 * on each element of an array
 *
 * @array: the given array of elements
 *
 * @size: the size of the array
 *
 * @action: a pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
