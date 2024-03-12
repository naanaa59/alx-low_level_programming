#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of int w bin/search
 *
 * @array: Pointer to the sorted array
 *
 * @size: Size of the array
 *
 * @value: Value to be searched
 *
 * Return: The index of found value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, i;
	size_t right = size - 1;
	size_t m, ret_value = -1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[right]);
		m = (left + right) / 2;
		if (array[m] < value)
		{
			left = m + 1;
		}
		else if (array[m] > value)
		{
			right = m - 1;
		}
		else
		{
			ret_value = m;
			break;
		}
	}
	return (ret_value);
}
