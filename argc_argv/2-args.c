#include "main.h"
#include <stdio.h>
/**
 * main - give the name program
 * @argc: it is void
 * @argv: all atributies
 *
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
int i = 0;
while (argv[i])
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
