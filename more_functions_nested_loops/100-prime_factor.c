#include <stdio.h>

/**
 * main - code
 *
 * Return: Always 0
 */
int main(void)
{
long int n = 612852475143;
int r;
int i;
for (i = 2; i < n; i++)
{
r = n % i;
if (r == 0)
{
n = n / i;
i--;
}
}
printf("%ld\n", n);
return (0);
}
