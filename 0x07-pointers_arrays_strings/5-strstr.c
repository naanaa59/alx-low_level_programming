#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 *
 * @haystack:the string to locate in
 *
 * @needle: the substring to locate
 *
 * Return: a pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}



