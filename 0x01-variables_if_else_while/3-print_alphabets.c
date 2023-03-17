/**
 * main - Entry point
 *
 * Description: print all aplhabet both uppercase
 * and lower case
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	char c, C;

	/* while loop to print lowercase */
	while (c <= 'z')
	{
		putchar(c);
		++c;
	}

	/* while loop to print UPPERCASE */
	while (C <= 'Z')
	{
		putchar(C);
		++C;
	}

	putchar('\n');

	return (0);
}
