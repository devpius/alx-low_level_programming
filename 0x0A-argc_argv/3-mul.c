/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Mon, 10 Apr 2023
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: multiplies two arguments
 * @argc: arguments count
 * @argv: arguments array
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc <= 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	k = i * j;


	printf("%i\n", k);

	return (0);
}

