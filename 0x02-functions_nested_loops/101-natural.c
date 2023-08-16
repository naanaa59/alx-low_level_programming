#include "main.h"
#include <stdio.h>

/**
 *main  - entry point 
 *
 *
*/
int main(void)
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
	return (0);
}
