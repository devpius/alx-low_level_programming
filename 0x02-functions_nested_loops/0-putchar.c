/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: 21st March 2023
 */

#include"main.h"

/**
 * main - Entry point
 *
 * Description: the program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; ++i)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}

