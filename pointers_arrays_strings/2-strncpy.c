#include "main.h"
#include <stdio.h>

/**
 * *_strncpy- check the code
 *@dest: pointer
 *@src: pointer source
 *@n: byte
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (src[i] > 0)
i++;
for (j = 0; j < n; j++)
{
dest[j] = src[j];
}
/*dest[j + 1] = '\0';*/
return (dest);
}
