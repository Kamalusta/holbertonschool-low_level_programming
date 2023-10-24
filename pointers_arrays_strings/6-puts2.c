#include "main.h"

/**
 * puts2 - check the code
 *@str: pointer
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
int i = 0;
int j = 0;
int len = 0;
while (str[i] > 0)
{
i++;
len = i;
}
while (str[j] < len)
{
_putchar(str[j]);
j = j + 2;
}
_putchar('\n');
}
