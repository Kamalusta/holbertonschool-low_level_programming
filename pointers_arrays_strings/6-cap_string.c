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
if (a[0] > 96 && a[0] < 123)
a[0] = a[0] - 32;
while (a[i])
{
if (a[i] == 32 || a[i] == 10 || a[i] == 44 || a[i] == 46 || a[i] == 9 ||
a[i] == 32 || a[i] == 63 || a[i] == 40 || a[i] == 41 || a[i] == 123 ||
a[i] == 124)
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
