/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 */

#include "main.h"

/**
* _pow_recursion - function that returns value if x power y
* @x: base parameter
* @y: power parameter
* Return: () x power y
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
	return (x * _pow_recursion(x, y - 1));
}
