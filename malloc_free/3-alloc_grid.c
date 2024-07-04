#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **pn;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	pn = (int **) malloc(sizeof(int *) * height);

	if (pn != NULL)
	{
		for (i = 0; i < height; i++)
		{
			pn[i] = (int *) malloc(sizeof(int *) * width);
			if (pn[i] != NULL)
			{
				for (j = 0; j < width; j++)
					pn[i][j] = 0;
			}
			else
			{
				for (; i >= 0; i--)
				{
					free(pn[i]);
				}
				free(pn);
				return (NULL);
			}
		}
		return (pn);
	}
	else
	{
		return (NULL);
	}
}
