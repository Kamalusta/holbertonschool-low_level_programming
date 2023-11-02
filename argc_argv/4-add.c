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
int i;
int res = 0;
if (argc < 2)
printf("0\n");
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) > 0)
res += atoi(argv[i]);
else
{
printf("Error\n");
res = 0;
return (1);
break;
}
}
if (res)
printf("%d\n", res);
return (0);
}
