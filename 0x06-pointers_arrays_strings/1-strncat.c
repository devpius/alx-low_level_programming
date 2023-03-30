/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: Thu, 30 Mar 2023
 */

#include <stdio.h>

/**
 * _strncat - concatenates two strings using n bytes from @src
 *
 * @dest: param to concatenate to
 * @src: param to be contenated counting off specified bytes
 * @n: number of bytes to concatenate
 *
 * Return: always (dest)
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	/* count the size of dest */
	while (dest[i])
		i++;

	/* iterating through the src */
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	return (dest);
}

