#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
int *arr;
int i = 0;
arr = malloc(sizeof(int) * (max - min + 1));
if (min > max || !arr)
return (NULL);
while (min <= max)
{
arr[i] = min;
min++;
i++;
}
return (arr);
}
