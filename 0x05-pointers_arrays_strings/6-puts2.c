/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: 28th-March-2023
 */

#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: char to check
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar('\n');
}
