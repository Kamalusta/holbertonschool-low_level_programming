#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code
 * @s1: first string
 * @s2: second string
 * @n: unsigned integer
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;
char *arr;
if (!s1)
s1 = "";
if (!s2)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
if (j <= n)
n = j;
arr = malloc(sizeof(char) * (i + n + 1));
if (!arr)
return (NULL);
for (j = 0; j < i; j++)
arr[j] = s1[j];
for (j = 0; j < n; j++)
arr[i + j] = s2[j];
arr[i + j] = '\0';
return (arr);
}
