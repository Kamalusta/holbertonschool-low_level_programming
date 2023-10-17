#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 48;

while (x < 57)
{
putchar(x);
putchar(',');
putchar(' ');
x = x + 1;
}
putchar(57);
return (0);
}
