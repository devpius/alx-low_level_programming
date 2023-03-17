/**
 * main - Entry point
 *
 * Description: print all possible combination
 *		of digits
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int n;

	while (n <= 9)
	{
		putchar(n + 48);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}

		++n;
	}
	putchar('\n');

	return (0);
}
