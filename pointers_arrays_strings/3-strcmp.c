#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code
 *@s1: pointer 1
 *@s2: ponter 2
 *
 * Return: Always 1.
 */
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] && s2[i] && s1[i] == s2[i])
++i;
return (s1[i] - s2[i]);
}
