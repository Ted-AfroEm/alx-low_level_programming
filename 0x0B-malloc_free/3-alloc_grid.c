#include "main.h"

/**
 * alloc_grid - return a pointer to 2 dimensional array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **) malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
		grid[i] = (int *) malloc(sizeof(int) * width);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	return (grid);
}
