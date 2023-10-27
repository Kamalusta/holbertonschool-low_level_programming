#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the code
 * @s: -char point
 * @c: - char
 *
 * Return: Always char pointer
 */
char *_strchr(char *s, char c)
{
int i, j;
int k = 0;
static char arr[90];
for (i = 0; s[i] >= 0; i++)
{
if (s[i] == c && k == 0)
{
k = 1;
for (j = 0; s[i + j] >= 0; j++)
arr[j] = s[i + j];
}
}
if (k == 1)
return (arr);
else
return (NULL);
}
