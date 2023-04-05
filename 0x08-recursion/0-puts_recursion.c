/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Thu, 06 Apr 2023
 */

#include<stdio.h>
#include"main.h"
/**
 * _puts_recursion - function prints a string followed
 *			by a new line
 * @s: string parameter to be printed
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		printf("\n");
	}

}
