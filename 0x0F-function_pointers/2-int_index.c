#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 *
 * @array: the array where to search
 *
 * @size: the size of the array
 *
 * @cmp: the pointer to the function that will compare to a value
 *
 * Return: index int to the searched value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index = -1, flag;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		flag = cmp(array[i]);
		if (flag != 0)
		{
			index = i;
			break;
		}

	}
	return (index);
}
