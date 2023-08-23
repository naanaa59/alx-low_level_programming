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
        int i;

        for (i = 0; s[i]; i++)
        {
                if ((s[i] >=65  && s[i] <= 77)  || (s[i] >= 97 && s[i] <= 109))
                        s[i] = s[i] + 13;
		else if ((s[i] >= 78 && s[i] <=90 )  || (s[i] >= 109 && s[i] <= 122))
			s[i] -= 13;
        }
        return (s);
}

