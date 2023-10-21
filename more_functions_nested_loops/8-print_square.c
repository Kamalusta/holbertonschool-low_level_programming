#include "main.h"
/**
 * print_square - check the code
 *@size: siz of square
 *
 * Return: Always 0.
 */
void print_square(int size)
{
int s = size;
int c = size;

if (size < 1)
_putchar('\n');
while (s > 0)
{
while (c > 0)
{
_putchar('#');
c--;
}
_putchar('\n');
s--;
c = size;
}
}
