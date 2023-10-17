#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  _putchar('p');
return (0);
}
int _putchar(char c)
{
return (write(1, &c, 1));
}
