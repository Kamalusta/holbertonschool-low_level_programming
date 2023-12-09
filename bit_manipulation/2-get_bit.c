#include "main.h"

/**
 * get_bit - check the code
 * @n: - given number
 * @index: - index of number
 *
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int i = 0, m = n;
while (m)
{
m >>= 1;
i++;
}
if (index >= i)
return (-1);
n = n >> index;
if (n & 1)
return (1);
else
return (0);
}
