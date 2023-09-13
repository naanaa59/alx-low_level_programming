#include <stdlib.h>
#include <stdio.h>

/**
 * main - code to generate an opcode
 *
 * @argc: arguments count
 *
 * @argv: arguments vector
 *
 * Return: 0
 */
void main(int argc, char *argv[])
{
	int num_bytes, i;
	unsigned char *mainPtr = (unsigned char *)main;

	if (main == NULL)
		return;
	if (mainPtr == NULL)
		return;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num_bytes; i++)
		printf("%02x ", mainPtr[i]);
	printf("\n");

}
