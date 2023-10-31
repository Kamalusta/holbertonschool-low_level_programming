#include "main.h"
#include <stdio.h>

int prime(int a, int i);
/**
 * is_prime_number - check the code
 * @n: intiger
 *
 * Return: Always result.
 */

int is_prime_number(int n)
{
if (n == 1 || n == -1)
return (0);
else
return (prime(n, 2));
}

/**
 * prime - check the code
 * @a: intiger
 * @i: iteration
 *
 * Return: Always result.
 */

int prime(int a, int i)
{
if (a / 2 < i)
return (1);
else if (a % i == 0)
return (0);
else
return (prime(a, i + 1));
}
