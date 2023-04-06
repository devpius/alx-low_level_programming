/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Thu, 06 Apr 2023
 */

#include "main.h"

/**
 * hasRoots - checks if the function has real roots
 * @x: param of type int
 * @y: param of type int
 * Return: returns int
 */
int hasRoots(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (hasRoots(x + 1, y));
}

/**
 * _sqrt_recursion - computes the square root of a number
 * @n: param of type int
 * Return: returns root of a number @n of type int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (hasRoots(1, n));
}
