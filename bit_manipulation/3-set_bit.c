#include "main.h"

/**
 * set_bit - check the code
 * @n: -giben number
 * @index: - index of number
 *
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i = 1;
if (index > 63)
return (-1);
i <<= index;
*n |= i;
return (1);
}
