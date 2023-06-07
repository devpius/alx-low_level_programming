/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 */

#include "main.h"

/**
* factorial - function that returns the factorial of argument passed
* @n: parameter to be calculated
* Return: () factorial
*/

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
