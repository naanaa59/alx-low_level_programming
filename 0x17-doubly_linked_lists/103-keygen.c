#include "lists.h"
/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char passwrd[7], *code;
	int len = strlen(argv[1]), i, tmp;

	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	passwrd[0] = code[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[1][i];
	passwrd[1] = code[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[1][i];
	passwrd[2] = code[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	passwrd[3] = code[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[1][i] * argv[1][i]);
	passwrd[4] = code[(tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	passwrd[5] = code[(tmp ^ 229) & 63];

	passwrd[6] = '\0';
	printf("%s", passwrd);
	return (0);
}
