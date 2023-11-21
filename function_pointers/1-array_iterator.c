#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: the array to print
 * @size: size elements
 * @action: function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i;
if (!action || !array)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
