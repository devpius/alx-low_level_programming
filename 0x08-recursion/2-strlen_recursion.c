/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Thu, 06 Apr 2023
 */

#include "main.h"

/**
 * _strlen_recursion - computes the lenght of the string
 * @s: string param to be computed
 * Return: Returns the value of the string (i)
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return (i);
}
