#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
int r = 0;
int c = 0;
int n = 0;
while (r < 10)
{
while (c < 10)
{
n = r * c;
if (c == 0 && n < 1)
_putchar('0' + n);
else if (n < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + n);
}
else
{
_putchar(',');
_putchar(' ');
_putchar('0' + n / 10);
_putchar('0' + n % 10);
}
c = c + 1;
}
_putchar('\n');
c = 0;
r = r + 1;
}
}
