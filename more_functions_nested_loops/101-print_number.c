#include "main.h"
/**
 * print_number - check the code
 *@n: given number
 *
 * Return: Always 0.
 */
void print_number(int n)
{
int m = n;
int a = n;
int c = 1;
int k = 0;

if (n < 0)
_putchar('-');
if (n == 0)
_putchar('0');
else
{
while (a != 0)
{
a = a / 10;
if (a != 0)
c = c * 10;
else if (c < 10)
_putchar('0' + m);
}
while (c > 1)
{
k = m / c;
if (n < 0)
k = k * (-1);
_putchar('0' + k);
m = m % c;
c = c / 10;
if (m < 10 && m > -10 && c == 1)
  {
    if (n < 0)
m = m * (-1);
_putchar('0' + m);
  }
}
}
}
