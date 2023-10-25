#include "main.h"
#include <stdio.h>

/**
 * *_strcpy- check the code
 *@dest: pointer 
 *@src: pointer source
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
  int i;
  while (src[i] >= 0)
    {
      dest[i] = src[i];
      i++;
    }
  return dest;
}
