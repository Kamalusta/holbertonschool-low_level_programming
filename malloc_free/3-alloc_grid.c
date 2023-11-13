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
int i;
int **arr2d;
if (width <= 0 || height <= 0)
return (NULL);
arr2d = malloc(sizeof(int *) * width);
if (arr2d == NULL)
return (NULL);
for (i = 0; i < width; i++)
{
*(arr2d + i) = malloc(sizeof(int) * height);
if (*(arr2d + i) == NULL)
{
return (NULL);
free(*(arr2d + i));
free(arr2d);
}
}
return (arr2d);
}
