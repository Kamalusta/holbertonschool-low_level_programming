#include "main.h"

/**
 * flip_bits - check the code
 * @n: - number 1
 * @m: - number 2
 *
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 0;
n ^= m;
while (n)
{
if (n & 1)
i++;
n >>= 1;
}
return (i);
}
