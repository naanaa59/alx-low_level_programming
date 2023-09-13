#include "3-calc.h"

/**
 * main - check code
 *
 * @argc: count of arguments
 *
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	f = get_op_func(op);
	if (f == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	result = f(a, b);
	printf("%d\n", result);
	return (0);

}
