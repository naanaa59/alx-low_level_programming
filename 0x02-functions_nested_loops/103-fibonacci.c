#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0
*/
int main(void)
{
	int f = 0;
	int s = 1;
	int sum = 0;
	int even_sum = 0;

	while (even_sum < 4000000)
	{
		sum = f + s;
		if (sum % 2 == 0)
			even_sum += sum;
		f = s;
		s = sum;
	}
	printf("%d\n", even_sum);
	return (0);
}

