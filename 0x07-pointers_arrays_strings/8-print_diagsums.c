#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: the given array
 *
 * @size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(a + i * size + j);
			}
		}
		for (k = size - 1; k >= 0; k--)
		{
			if (k == size - 1 - i)
				sum2 += *(a + i * size + k);
		}
	}

	printf("%d, %d\n", sum1, sum2);
}
