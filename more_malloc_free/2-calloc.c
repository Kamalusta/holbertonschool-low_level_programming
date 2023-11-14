#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *arr;
if (nmemb == 0 || size == 0)
return (NULL);
arr = malloc(nmemb * size);
if (!arr)
return (NULL);
for (i = 0; i < nmemb * size; i++)
arr[i] = 0;
return (arr);
}
