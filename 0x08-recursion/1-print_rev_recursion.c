/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Thu, 06 Apr 2023
 */

/**
 * _print_rev_recursion - prints the reverse string
 *
 * @s: string param to be printed
 */

void _print_rev_recursion(char *s)
{
	if (s*)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
