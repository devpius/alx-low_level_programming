/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Wed, 19 Apr 2023
 */

#include "functions_pointers.h"

/**
 * print_name - function that prints a name
 * @name: param name
 * @f: function param
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
