/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Thu, 06 Apr 2023
 */

#include "main.h"

/**
 * _pow_recursion - returns the value of @x raised to the power @y
 * @x: first param of type int
 * @y: second param of type int
 * Return: it returns x^y of type int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	} else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
