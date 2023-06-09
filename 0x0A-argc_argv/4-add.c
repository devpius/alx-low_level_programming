/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Mon, 10 Apr 2023
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: adds postive numbers passed to it
 * @argc: arguments count
 * @argv: arguments array
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i, j, _r = 0;
	char *c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		j = strtol(argv[i], &c, 10);


		if (*c)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			_r += j;
		}
	}

	printf("%d\n", _r);

	return (0);
}

