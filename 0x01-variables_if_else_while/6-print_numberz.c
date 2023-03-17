/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 * except q and e
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');

	return (0);
}
