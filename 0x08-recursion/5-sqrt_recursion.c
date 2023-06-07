/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 */

#include "main.h"

/**
 * chk_rts - checks if the function has real roots
 * @x: param of type int
 * @y: param of type int
 * Return: returns int
 */

int chk_rts(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (chk_rts(x + 1, y));
}

/**
* _sqrt_recursion - function that returns the sqaure root of a number
* @n: parameter to be evaluated
* Return: Square root of @n
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (chk_rts(1, n));
}
