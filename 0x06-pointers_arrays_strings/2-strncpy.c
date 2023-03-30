/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: Thu, 30 Mar 2023
 */

#include <stdio.h>

/**
 * _strncpy - function that copies string
 *
 * @dest: param specifying destination to copy to
 * @src: param specifying string to copy
 * @n: number of bytes to copy
 *
 * Return: (dest) returns destination of copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';


	return (dest);
}

