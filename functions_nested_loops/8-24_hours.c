#include "main.h"
/**
 * jack_bauer - check the code gor lower case
 *
 *
 */
void jack_bauer(void)
{
int m1 = 0;
int h1 = 0;
int m2 = 0;
int h2 = 0;
while (h1 < 3)
{
while (h2 < 10)
{
if (h1 == 2 && h2 > 3)
{
}
else
{
while (m1 < 6)
{
while (m2 < 10)
{
_putchar('0' + h1);
_putchar('0' + h2);
_putchar(':');
_putchar('0' + m1);
_putchar('0' + m2);
_putchar('\n');
m2 = m2 + 1;
}
m1 = m1 + 1;
m2 = 0;
}
}
h2 = h2 + 1;
m1 = 0;
m2 = 0;
}
h1 = h1 + 1;
h2 = 0;
m1 = 0;
m2 = 0;
}
}
