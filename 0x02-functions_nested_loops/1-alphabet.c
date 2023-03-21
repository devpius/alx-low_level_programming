/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: 21st-March-2023
 */

#include"main.h"

/**
 * print_alphabet - prints the aplhabet in lowercase,
 *			 followed by a new line.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);

	_putchar('\n');
}

