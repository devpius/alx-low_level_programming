/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: 28th-March-2023
 */

#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
