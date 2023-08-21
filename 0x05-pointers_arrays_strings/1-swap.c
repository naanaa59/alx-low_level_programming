#include "main.h"

/**
 *swap_int: swaps the values of two integers.
 *
 *@a: first value to swap
 *
 *@b: second value to swap
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

