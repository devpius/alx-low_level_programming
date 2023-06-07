/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 */

#include "main.h"

/**
 * chk_prime - checks for prime numbers
 * @x: int
 * @y: int
 * Return:int
 */
int chk_prime(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (chk_prime(x + 1, y));
}


/**
 * is_prime_number - checks if the function has real roots
 * @n: param of type int
 * Return: returns int
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (chk_prime(2, n));
}
