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
int i, j;
/*unsigned long int mul;*/
if (argc != 3)
{
printf("Error\n");
exit(98);
}
else
{
for (i = 1; i < argc; i++)
for (j = 0; argv[i][j]; j++)
if (argv[i][j] < 48 || argv[i][j] > 57)
{
printf("Error\n");
exit(98);
return (0);
break;
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
