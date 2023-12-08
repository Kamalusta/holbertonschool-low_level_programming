#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: - binary string
 *
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
int len, j = 0;
unsigned int n, p = 1;
if (!b)
return (0);
while (b[j])
j++;
len = j - 1;
if (b[len] == '1')
n = 1;
else if (b[len] == '0')
n = 0;
else
return (0);
for (j = 1; j <= len; j++)
{
if (b[len - j] != '0' && b[len - j] != '1')
return (0);
p *= 2;
if (b[len - j] == '1')
n += p;
}
return (n);
}
