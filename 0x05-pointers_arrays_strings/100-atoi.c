#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: the string to convert
 *
 * Return: int value of the string
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int i, sign = 1;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}

	}
	return (num * sign);
}
