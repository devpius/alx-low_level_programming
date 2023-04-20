/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Thu, 20 Apr 2023
 */

#include "variadic_functions.h"

/**
 * print_strings - Entry point
 * @separator: character for seperating
 * @n: number of arguments to be passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		seperator = "";

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);

}