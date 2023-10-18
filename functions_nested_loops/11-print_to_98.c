#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code
 * @n: given number
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n < 99)
{
printf("%d, ", n);
n = n + 1;
}
}
else if (n > 98)
{
while (n > 97)
{
printf("%d, ", n);
n = n - 1;
}
}
else
{
printf("%d", n);
}
printf("\n");
}
