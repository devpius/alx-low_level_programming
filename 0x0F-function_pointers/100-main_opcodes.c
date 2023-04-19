/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Thur, 20 Apr 2023
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to be print
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints opcodes of its own main function
 * @argc: arguments count
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
