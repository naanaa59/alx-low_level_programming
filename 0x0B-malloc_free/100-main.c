#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s =3D argstostr(ac, av);
    if (s =3D=3D NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}