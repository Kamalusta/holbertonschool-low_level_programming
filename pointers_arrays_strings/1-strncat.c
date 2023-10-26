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
 int k = 0;
 int z;
while (dest[i])
i++;
 while (src[k])
   k++;
 if (k >= n)
   z = n;
 else
   z = k;
   
for (j = 0; j < z; j++)
{
dest[i + j] = src[j];
}
   
return (dest);
}
