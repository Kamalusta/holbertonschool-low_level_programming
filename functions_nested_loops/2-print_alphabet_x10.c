#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - write the alphabet  10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int k = 0;
while (k < 10)
{
int i = 97;
while (i < 123)
{
_putchar(i);
i = i + 1;
}
_putchar('\n');
k = k + 1;
}
}
