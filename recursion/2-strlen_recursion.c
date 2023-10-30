#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * @s: pointer
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
int i;
if (!*s)
return (0);
i = _strlen_recursion(s + 1);
return (i + 1);
}
