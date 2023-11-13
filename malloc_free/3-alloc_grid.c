#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int i = 0;
int j;
int **arr2d;
if (width <= 0 || height <= 0)
return (NULL);
else
{
arr2d = malloc(sizeof(int *) * width);
if (arr2d == NULL)
return (NULL);
else
for (i = 0; i < width; i++)
*(arr2d + i) = malloc(sizeof(int) * height);
for (i = 0; i < width; i++)
for (j = 0; j < height; j++)
arr2d[i][j] = 0;
return (arr2d);
}
}
