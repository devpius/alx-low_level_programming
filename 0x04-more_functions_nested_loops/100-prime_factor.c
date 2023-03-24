/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: 23rd-March-2023
 */

#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: always 0
 **/

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
