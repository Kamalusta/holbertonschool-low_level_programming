#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - give the name program
 * @argc: it is void
 * @argv: all atributies
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int j;
int i;
int res = 0;
if (argc < 2)
printf("0\n");
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < 48 || argv[i][j] > 57)
{
printf("Error\n");
res = 0;
return (1);
break;
}
}
res += atoi(argv[i]);
}
if (res)
printf("%d\n", res);
return (0);
}
