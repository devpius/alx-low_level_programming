#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: print value of n, either zero, postive or negative
 *
 * Return: Always 0 (Success)
 */

void postive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
	else
		printf("%i is zero\n", i);

	return;
}
