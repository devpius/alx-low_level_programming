/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Wed, 20 Apr 2023
 */

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - addition
  * @a: param a of type int
  * @b: param b of type int
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtraction
  * @a: param a of type int
  * @b: param b of type int
  *
  * Return: diffrence
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplication
  * @a: param a of type int
  * @b: param b of type int
  *
  * Return: product of and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division
  * @a: param a of type int
  * @b: param b of type int
  *
  * Return: a / b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - modulo division
  * @a: param a of type int
  * @b: param b of type int
  *
  * Return: (a % b)
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
