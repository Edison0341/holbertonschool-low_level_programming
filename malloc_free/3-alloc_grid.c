#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width
 * @height: height
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **pn;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	pn = (int **) malloc(sizeof(int *) * height);
	if (pn != NULL)
	{
		for (; i < height; i++)
		{
			pn[i] = (int *) malloc(sizeof(int) * width);
			if (pn[i] != NULL)
			{
				for (j = 0; j < width; j++)
					pn[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(pn[i]);
					i--;
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
