#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code
 *@s1: first string
 *@s2: second string
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
int i = 0;
int i2 = 0;
int k;
char *str;
if (s1 != NULL)
while (s1[i])
i++;
if (s2 != NULL)
while (s2[i2])
i2++;
str = malloc(sizeof(char) * (i + i2 + 1));
if (str == NULL)
return (NULL);
else
{
for (k = 0; i > k; k++)
str[k] = s1[k];
for (k = 0; i2 > k; k++)
str[i + k] = s2[k];
return (str);
}
}
