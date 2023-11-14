#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code
 * @b: intiger
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
void *n;
n = malloc(b);
if (!n)
exit(98);
return (n);
}
