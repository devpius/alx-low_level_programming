/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Mon, 03 Apr 2023
 */

#include <stdio.h>

/**
 * _memset - function fills with memory with a constant byte
 *
 * @s: parameter to be returned of type char
 * @b: parameter to be put into memory of type char
 * @n: parameter specifying the number of bytes
 *
 * Return: Always s (string)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

