#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers w/ linar search
 *
 * @array: Pointer to the array to search in
 *
 * @size: Number of elements in array
 *
 * @value: The value to search
 *
 * Return: The first index where value is located
 * if value is not present or array NULL , return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int ret_val = -1;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			ret_val = i;
			break;
		}
	}

	return (ret_val);

}
