#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - prints buffer in hexa
 * @ptr: the address of memory to print
 * @new_size: the size of the memory to print
 * @old_size: old size
 *
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  if (new_size == old_size)
    return (ptr);
  if (!ptr)
    ptr = malloc(new_size);
  if (new_size == 0 && ptr != NULL)
    {
      free(ptr);
      return (NULL);
    }
  if (new_size > old_size)
    {
      free(ptr);
      ptr = malloc(old_size + new_size);
      return (ptr);
    }
  else
    return (NULL);
}
