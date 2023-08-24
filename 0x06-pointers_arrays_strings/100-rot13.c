#include "main.h"

/**
 * rot13 - encode string using rot13.
 *
 * @s: the given string to encode
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char tmp;

	for (i = 0; s[i]; i++)
	{
		tmp = s[i];
		for (j = 0; alpha[j]; j++)
		{
			if (s[i]  == alpha[j])
			{
				tmp = rot[j];
				break;
			}
		}
		s[i] = tmp;
	}
	return (s);
}

