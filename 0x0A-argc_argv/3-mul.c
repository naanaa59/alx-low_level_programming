#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: arguments count
 *
 * @argv: arguments vector
 *
 * Return: 0 or 1 if Error
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}


