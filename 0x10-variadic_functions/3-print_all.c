/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Thu, 20 Apr 2023
 */

#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: param for formatter to use
 */
void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *_str;
	va_list args;

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(args, int));
				flag = 0;
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 0;
				break;
			case 's':
				_str = va_arg(args, char*);
				if (_str == NULL)
					_str = "(nil)";
				printf("%s", _str);
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

