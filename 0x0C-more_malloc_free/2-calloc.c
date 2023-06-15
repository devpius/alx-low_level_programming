/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Fri, 14 Apr 2023
 */

#include <stdlib.h>

/**
 * _calloc - allccates memory using malloc
 * @nmemb: array size
 * @size: elements of size
 * Return: pointer to memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ch = malloc(nmemb * size);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ch[i] = 0;
	return (ch);
}
