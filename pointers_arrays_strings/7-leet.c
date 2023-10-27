#include "main.h"

/**
 * leet - check the code for
 *@a: pointer
 *
 * Return: Always pointer.
 */
char *leet(char *a)
{
char letter[] = "AaEeOoTtLl";
char number[] = "4433007711";
int i, j;
for (i = 0; a[i] > 0; i++)
{
for (j = 0; letter[j]; j++)
{
if (letter[j] == a[i])
a[i] = number[j];
}
}
return (a);
}
