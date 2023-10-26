#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code
 *@s1: pointer 1
 *@s2: ponter 2
 *
 * Return: Always 1.
 */
int _strcmp(char *s1, char *s2)
{
  int n1 = 0;
  int n2 = 0;
  int i = 0;
  int j = 0;
  while (s1[i])
    {
    n1 = n1 + s1[i];
    i++;
    }
  while (s2[j])
    {
      n2 = n2 + s2[j];
      j++;
    }
  return (n1 - n2);
}
