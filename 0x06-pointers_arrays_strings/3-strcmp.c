#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: It returns an integer less  than,  equal to,
 * or greater than zero if s1 is found, respectively,
 * to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int ls1, ls2, flag;

	for (ls1 = 0; s1[ls1];)
		ls1++;
	for (ls2 = 0; s2[ls2];)
		ls2++;
	if (ls1 < ls2)
		flag = -15;
	else if (ls1 == ls2)
		flag = 0;
	else
		flag = 15;
	return (flag);
}


















