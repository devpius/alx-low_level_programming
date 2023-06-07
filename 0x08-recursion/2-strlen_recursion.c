/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 */

#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string
* @s: parameter to be printed
* Return: void
*/
int _strlen_recursion(char *s)
{
	int r = 0;

	if (*s)
	{
		r += 1;
		return (r + _strlen_recursion(s + 1));
	}
	return (r);
}
