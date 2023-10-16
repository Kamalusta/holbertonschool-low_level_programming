#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "abcdefghijklmnopqrstuvwxyz";
int i;
int leng = strlen(str);
for (i = 0; i < leng; i++)
{
char c = str[i];
putchar(c);
}
putchar('\n');
return (0);
}
