#include "main.h"
#include <stdio.h>

/**
 * *_strncat - check the code
 *@dest: first string
 *@src: second string
 *@n: byte
 *
 * Return: Always pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i])
i++;
while (j < n)
{
dest[i + j] = src[j];
j++;
}
return (dest);
}
