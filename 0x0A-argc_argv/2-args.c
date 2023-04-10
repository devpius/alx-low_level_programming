/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Mon, 10 Apr 2023
 */

#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints all arguments it recieves
 * @argc: arguments count
 * @argv: arguments array
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

