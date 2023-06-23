/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Thu, 23 Jun 2023
 */

#include "variadic_functions.h"

/**
 * sum_them_all - variadic function to sum all it arguments
 * @n: number of arguments
 * Return: Always 0 if args are null Return Sum,
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
