/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: 28th-March-2023
 */

#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: parameter of type char to specify destination
 * @src: parameter of type char to specify source
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
