/**
 * main - Entry point
 *
 * Description: print all single digit base 10  numbers
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");
	return (0);
}
