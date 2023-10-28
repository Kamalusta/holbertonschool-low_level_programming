#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 * @s: pointer
 * @accept: pointer
 *
 * Return: Always pointer.
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;
int k = 0;
while (s[i])
{
for (j = 0; accept[j]; j++)
if (s[i] == accept[j])
k = 1;
if (k == 1)
break;
i++;
}
if (k == 1)
return (s + i);
else
return (0);
}
