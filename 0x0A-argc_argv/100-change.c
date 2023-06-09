/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Mon, 10 Apr 2023
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: replace with your description
 * @argc: arguments count
 * @argv: arguments array
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{


	int k, l;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	k = strtol(argv[1], &p, 10);
	l = 0;

	if (!*p)
	{
		while (k > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (k >= cents[i])
				{
					l += k / cents[i];
					k = k % cents[i];
				}
			}
		}
		if (k == 1)
			l++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", l);
	return (0);
}

