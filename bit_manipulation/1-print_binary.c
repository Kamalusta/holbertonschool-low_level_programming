#include "main.h"
/**
 * binary - check the code
 * @n: - given number
 *
 * Return: Always 0.
 */
void binary(unsigned long int n)
{
if (!n)
return;
binary(n >> 1);
if (n & 1)
_putchar('1');
else
_putchar('0');
}
/**
 * print_binary - check the code
 * @n: - given number
 *
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
if (!n)
{
_putchar('0');
return;
}
binary(n);
}
