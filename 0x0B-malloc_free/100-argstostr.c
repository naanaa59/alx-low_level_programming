#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 *
 * @ac: argument count
 *
 * @av: argument vector
 *
 * Return: a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j;
	int len = 0, sum_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		sum_len += len + 1;
	}
	s = malloc(sizeof(char) * (sum_len + 1));
	if (s == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[len] = av[i][j];
			len++;
		}
		s[len] = '\n';
		len++;
	}

	s[len] = '\0';
	return (s);
}
