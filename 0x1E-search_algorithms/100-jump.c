#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted int  array using jump search
 *
 * @array: The pointer to the sorted array
 *
 * @size: The size of the array
 *
 * @value: The value to be found
 *
 * Return: returns the index of the value or -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, i;
	size_t square = sqrt(size);
	size_t end = square;

	if (array == NULL)
		return (-1);

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end += square;
	}
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (i = start; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);

}
