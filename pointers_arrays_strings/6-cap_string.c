#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 * @a: pointer
 *
 * Return: Always 0.
 */
char *cap_string(char *a)
{
int i = 0;
while (a[i])
{
if (a[i] == ' ' || a[i] == '\n' || a[i] == ',' || a[i] == '.' || a[i] == '\t' || a[i] == '!' || a[i] == '?' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
{
i++;
if (a[i] > 96 && a[i] < 123)
a[i] = a[i] - 32;
}
else
i++;
}
return (a);
}
