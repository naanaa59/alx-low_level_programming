#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: arg count
 *
 * @argv: arg vector
 *
 * Return: minimum number of coins or Error if more than an arg
 */
int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int change;
	int sum = 0;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change > 0)
	{
		for (i = 0; i < 5; i++)
		{
			sum += change / cents[i];
			change = change % cents[i];
		}
	}
	printf("%d\n", sum);
	return (0);
}



