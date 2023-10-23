#include "main.h"
/**
 * print_number - check the code
 *@n: given number
 *
 * Return: Always 0.
 */
void print_number(int n)
{
int m;
int a;
int c = 1;
int k = 0;
if (n < 0)
{
m = n * (-1);
a = n * (-1);
}
else
{
m = n;
a = n;
}
if (n == 0)
_putchar('0');
else
{
while (a > 0)
{
a = a / 10;
if (a > 0)
c = c * 10;
else
_putchar('0' + n);
}
if (n < 0)
_putchar('-');
while (c > 1)
{
k = m / c;
_putchar('0' + k);
m = m % c;
c = c / 10;
if (m < 10 && c == 1)
_putchar('0' + m);
}
}
}
