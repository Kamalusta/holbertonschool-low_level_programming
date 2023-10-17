#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - write the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
int i = 97;
while (i < 123)
{
_putchar(i);
i = i + 1;
}
_putchar('\n');
}
