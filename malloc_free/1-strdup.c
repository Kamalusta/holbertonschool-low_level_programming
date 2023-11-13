#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code
 * @str: string
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
int i = 0;
int j = 0;
char *cpy;
if (str == NULL)
return (NULL);
else
{
while (str[i])
i++;
cpy = malloc(sizeof(char) * i);
if (cpy == NULL)
return (NULL);
else
{
while (i)
{
cpy[j] = str[j];
i--;
j++;
}
return (cpy);
}
}
}
