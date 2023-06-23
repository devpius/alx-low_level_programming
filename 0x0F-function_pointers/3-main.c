/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Wed, 20 Apr 2023
 */


#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - test
  * @argc: argument count
  * @argv: arguments array
  *
  * Return: 0 (Success)
  */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
