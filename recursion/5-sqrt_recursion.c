#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the code
 * @n: integer
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else  if (n == 1)
return (1);
else if (n % 4 == 0)
return (2 * _sqrt_recursion(n / 4));
else if (n % 9 == 0)
return (3 * _sqrt_recursion(n / 9));
else if (n % 25 == 0)
return (5 * _sqrt_recursion(n / 25));
else if (n % 7 == 0)
return (7 * _sqrt_recursion(n / 49));
else if (n % 11 == 0)
return (11 * _sqrt_recursion(n / 121));
else
return (-1);
}
