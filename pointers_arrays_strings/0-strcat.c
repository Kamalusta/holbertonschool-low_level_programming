#include "main.h"
#include <stdio.h>

/**
 * *_strcat - check the code
 *@dest: first string
 *@src: second string
 *
 * Return: Always pointer
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i])
i++;
while (src[j])
{
dest[i + j] = src[j];
j++;
}
return (dest);
}
