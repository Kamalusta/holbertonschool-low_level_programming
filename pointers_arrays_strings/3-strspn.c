#include "main.h"
#include <stdio.h>

/**
 * _strspn - check the code
 * @s: first array
 * @accept: second one
 *
 * Return: Always int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
unsigned int k = 0;
for (i = 0; s[i] && i == k; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
k++;
}
}
return (k);
}
