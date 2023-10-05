#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array
 *                  of integers
 * @width: int
 * @height: int
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		{
			if (arr[i] == NULL)
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;
			}
		}
	}
	return (arr);
}
