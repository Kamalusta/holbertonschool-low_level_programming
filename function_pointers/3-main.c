#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - check the code
 * @argc: - count argument
 * @argv: - arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int res;
int (*op)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
{
printf("Error\n");
exit(100);
}
op = get_op_func(argv[2]);
if (!op)
{
printf("Error\n");
exit(99);
}
res = op(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", res);
return (0);
}
