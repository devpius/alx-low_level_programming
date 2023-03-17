/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *		in reverse order
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		--c;
	}
	putchar('\n');

	return (0);
}
