#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 * @a: pointer
 *
 * Return: Always 0.
 */
char *string_toupper(char *a)
{
int i = 0;
while (a[i])
{
if (a[i] > 96 && a[i] < 123)
{
a[i] = a[i] - 32;
}
i++;
}
return (a);
}
