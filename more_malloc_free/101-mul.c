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
int mul;
if (argc < 3)
{
printf("Error\n");
exit(98);
}
else if (!atoi(argv[1]) || !atoi(argv[2]))
{
printf("Error\n");
exit(98);
}
else
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
return (0);
}
