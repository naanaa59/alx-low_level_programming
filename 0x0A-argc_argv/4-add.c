#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * @argc: arguments count
 *
 * @argv: argument vector
 *
 * Return: 0 or 1 if Error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);

			}
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}




