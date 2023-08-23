#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: the given string to code
 *
 * Return: return encoded string in leet
 */
char *leet(char *s)
{
	int i, j;
	char l_alpha[5] = {'a', 'e', 'o', 't', 'l'};
	char leet[5] = {'4', '3', '0', '7', '1'};

	for (j = 0; s[j]; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (s[j] == l_alpha[i] || s[j] == l_alpha[i] - 32)
				s[j] = leet[i];
		}
	}
	return (s);
}
