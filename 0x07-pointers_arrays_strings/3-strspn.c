#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string to scan
 *
 * @accept: the chars to compare with
 *
 * Return: the length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;
	int found;

	for (i = 0; s[i]; i++)
	{
		found = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}

		}
		if (!found)
			break;
	}
	return (count);
}
