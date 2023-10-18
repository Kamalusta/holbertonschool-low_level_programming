#include "main.h"
/**
 * print_last_digit - check the code for last digit
 *@n: The number to be cheked
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
int r, p;
if (n == 0)
return (0);
else if (n < 0)
{
p = n * -1;
r = p % 10;
return (r);
}
else
{
r = n % 10;
return (r);
}
}

