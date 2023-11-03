#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - give the name program
 * @argc: it is void
 * @argv: all atributies
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int coin = 0;
int cnn = 0;
int nbr;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
if (atoi(argv[1]) < 0)
printf("0\n");
else
{
nbr = atoi(argv[1]);
coin = nbr / 25;
cnn = nbr % 25;
if (cnn > 9)
coin += cnn / 10;
cnn = cnn % 10;
if (cnn > 4)
coin += cnn / 5;
cnn = cnn % 5;
if (cnn > 1)
coin += cnn / 2;
cnn = cnn % 2;
if (cnn > 0)
coin += cnn;
printf("%d\n", coin);
}
return (0);
}
}
