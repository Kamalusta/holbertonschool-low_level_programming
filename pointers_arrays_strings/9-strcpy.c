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
  int i = 0;
  int j = 0;
  while (src[i] > 0)
      i++;
  for (j = 0; j < i; j++)
    {
      dest[j] = src[j];
    }
    
  return dest;
}
