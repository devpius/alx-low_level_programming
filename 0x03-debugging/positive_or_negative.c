#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * postive_or_negative - function to check for postive or negative number
 * @i: takes parameter i of type int
 */

void postive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
	else
		printf("%i is zero\n", i);
}
