#include "main.h"
/**
 * print_diagonal - check the code
 *@n: given number
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int m = 0;
int k = 0;
while (n > 0)
{
while (m > 0)
{
_putchar(' ');
m--;
}
k++;
_putchar('\\');
_putchar('\n');
n--;
m = k;
}
if (n < 1)
{
_putchar('\n');
}
}
