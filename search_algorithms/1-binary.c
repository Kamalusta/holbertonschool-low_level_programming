#include "search_algos.h"

/**
 * binary_search - Entry point
 * @array: - array
 * @size: - size of array
 * @value: - value for seraching
 *
 * Return: integer
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int half = size;
	int i;

	if (!array)
	return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
			printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		half = left + (right - left) / 2;
		if (array[half] == value)
		return (half);
		if (array[half] < value)
			left = half + 1;
		else
			right = half - 1;
	}
	return (-1);
}
