#include "main.h"
#include <stdlib.h>
/**
 * create_array - prints buffer in hexa
 * @c:char
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
char *arr = malloc(size);
unsigned int i = 0;
if (arr == NULL || size == 0)
  return (NULL);
else
{
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
}
