#include "main.h"

/**
 * rev_string - check the code
 *@s: pointer
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i = 0;
int len;
while (s[i] > 0)
{
i++;
len = i - 1;
}
for (i = 0; len / 2 >= i; i++)
{
int tmp = s[i];
s[i] = s[len - i];
s[len - i] = tmp;
}
}
