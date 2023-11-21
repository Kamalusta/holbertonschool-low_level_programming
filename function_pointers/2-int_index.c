#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: the integer to check
 * @size: size array
 * @cmp: function
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, res;
if (!array || !cmp || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
res = cmp(array[i]);
if (res != 0)
return (i);
}
return (-1);
}
