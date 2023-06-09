/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Mon, 10 Apr 2023
 */

#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the number of arguments passed to it
 * @argc: argument count
 * @argv: arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

