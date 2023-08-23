#include "main.h"
/**
 * _strncpy - copy a string .
 *
 * @dest: is the destination to copy to
 *
 * @src: it is the source to copy from
 *
 * @n: number of char to copy from src
 *
 * Return: dest copied str
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
        int l_src, l_dest, i;

        for (l_src = 0; src[l_src];)
        {
                l_src++;
        }
        for (l_dest = 0; dest[l_dest];)
        {
                l_dest++;
        }
        if (n > l_src)
        {
                for (i = 0; i < l_src; i++)
                {
                        dest[i] = src[i];
                }
        }
        else
        {
                for (i = 0; i < n; i++)
                {
                        dest[i] = src[i];
                }
        }
	for (; i < n; i++)
        dest[i] = '\0';
        return (dest);

}
