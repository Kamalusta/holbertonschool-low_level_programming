#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i = 0;
while (i < 10)
{
int j = 0;
int n = 0;
int m = 10;
while (n < 2)
{
while (j < m)
{
_putchar('0' + j);
j++;
if ((j == m && n == 0) || (n > 0 && j < 5))
{
_putchar('1');
m = 5;
}
}
j = 0;
n++;
}
_putchar('\n');
i++;
}
}
