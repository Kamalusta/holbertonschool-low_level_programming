#include "main.h"

/**
 * _puts_recursion - check the code
 * @s: pointer char
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
if (!s[0])
_putchar('\n');
else
{
_putchar(s[0]);
_puts_recursion(s + 1);
}
}
