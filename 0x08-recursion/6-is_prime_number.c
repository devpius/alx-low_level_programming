/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Thu, 06 Apr 2023
 */


#include "main.h"

/**
 * isPrime - checks for prime numbers
 * @i: int
 * @j: int
 * Return:int
 */
int isPrime(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (isPrime(i + 1, j));
}

/**
 * is_prime_number - states if number is prime
 * @n: parameter to be tested
 * Return: (1) if its prime number and (0) otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (isPrime(2, n));
}
