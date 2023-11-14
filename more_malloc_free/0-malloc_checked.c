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
if (!malloc(b))
exit(98);
return ((void *)malloc(b));
}
