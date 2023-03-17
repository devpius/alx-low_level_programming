/**
 * main - Entry point
 *
 * Description: A program to print last number stored in n After a random
 *
 * Return: Always 0 (Success)
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	d = n % 10;

	if (d > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, d);
	else if (d == 0)
		printf("Last digit of %i is %i and is 0\n", n, d);
	else if (d < 6 && d != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, d);

	return (0);
}

