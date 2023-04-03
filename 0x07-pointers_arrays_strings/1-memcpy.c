/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Mon, 03 Apr 2023
 */

#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 *
 * @dest: parameter for the destination
 * @src: parameter for what to copy
 * @n: number of bytes to copy
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		i++;
	}

	return (dest);
}

