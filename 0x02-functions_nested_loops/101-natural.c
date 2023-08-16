#include "main.h"
#include <stdio.h>

/**
 *sum_of_multiples - returns sum of multiples of 3 and 5 belox 1024 excluded
 *
 *
*/
void sum_of_multiples(void)
{
	int i = 0, sum;

	while (i >= 0)
	{
		sum = (3 * i) + (5 * i);
		if (sum > 1024)
			break;
	i++;
	}
	printf("%d\n", sum);
}
