/**
 * main - Entry point
 *
 * Description: A program that prints all base16
 *		numbers
 *
 * Output: (0123456789abcdef)
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int num = 0;
	char c = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		++num;
	}
	while (c <= 'f')
	{
		putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}
