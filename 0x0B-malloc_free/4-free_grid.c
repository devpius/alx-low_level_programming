/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Wed, 12 Apr 2023
 */

#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2D array grid
 * @grid: grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
