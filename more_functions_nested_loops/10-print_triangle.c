#include "main.h"
/**
 * print_triangle - check the code
 *@size: size of triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
int r = size;
int c = size;
int n = 1;
int k = 1;
if (size < 1)
_putchar('\n');
while (r > 0)
{
while (c > n)
{
_putchar(' ');
c--;
}
while (n > 0)
{
_putchar('#');
n--;
}
_putchar('\n');
k++;
n = k;
c = size;
r--;
}
}
