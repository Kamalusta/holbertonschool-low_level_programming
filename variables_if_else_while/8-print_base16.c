#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = 0; x <= 15; x++)
{
if (x < 10)
putchar(x + 48);
else if (x > 9)
putchar(x + 87);
}
putchar('\n');
return (0);
}
