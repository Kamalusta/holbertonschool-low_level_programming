#include <stdio.h>
#include <stdlib.h>
/**
 * main - give the count arguments
 * @argv: it is void
 * @argc: all atributies
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
unsigned long int mul;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
else if (argv[1][0] != '0' && argv[2][0] != '0')
{
if (!atoi(argv[1]) || !atoi(argv[2]))
{
printf("Error\n");
exit(98);
}
else
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%lu\n", mul);
}
}
else
printf("0\n");
return (0);
}
