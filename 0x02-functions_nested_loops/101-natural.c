#include "main.h"
#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0
*/
int main(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
