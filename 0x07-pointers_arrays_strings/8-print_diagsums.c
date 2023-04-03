/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Mon, 03 Apr 2023
 */

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @n: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int n)
{
	int i, j, k, l = 0, r = 0;

	for (i = 0; i < n; i++)
	{
		k = (i * n) + i;
		l += *(a + k);
	}
	for (j = 0; j < n; j++)
	{
		k = (j * n) + (size - 1 - j);
		r += *(a + k);
	}
	printf("%i, %i\n", l, r);
}
