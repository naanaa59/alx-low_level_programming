#include "search_algos.h"

/**
 * interpolation_search - searches for a value in sorted array of int
 *
 * @array: Pointer to the array
 *
 * @size: The size of the array
 *
 * @value: The value to be searched for
 *
 * Return: The index of the value or -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t position;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		position = low + (((double)(high - low) / (array[high] -
				  array[low])) * (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n",
			position, array[position]);
		if (array[position] == value)
		{
			return (position);
		}

		if (array[position] < value)
		{
			low = position + 1;
		}
		else
		{
			high = position - 1;
		}

	}
	printf("Value checked array[%ld] is out of range\n", position);
	return (-1);
}
