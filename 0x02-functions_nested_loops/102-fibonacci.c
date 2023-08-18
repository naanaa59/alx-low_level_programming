#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
	long int f = 0;
	long int s = 1;
	long int sum;
	int i = 0;

	while (i < 50)
	{
		sum = f + s;
		f = s;
		s = sum;
		printf("%ld", sum);
		if (i != 49)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
