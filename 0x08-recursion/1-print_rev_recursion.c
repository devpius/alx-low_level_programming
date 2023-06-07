/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 */

#include "main.h"

/**
* _print_rev_recursion - prints a reverse string passed to it
* @s: parameter to be printed
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
