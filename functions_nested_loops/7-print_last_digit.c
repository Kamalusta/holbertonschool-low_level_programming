#include "main.h"
/**
 * print_last_digit - check the code for last digit
 *@n: The number to be cheked
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
int r, p;
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
r = p % 10;
p = r * -1;
_putchar('0' + p);
return (r);
}
else
{
r = n % 10;
_putchar('0' + r);
return (r);
}
}

