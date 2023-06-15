/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Fri, 14 Apr 2023
 */

#include "main.h"

/**
 * _realloc - reallocates memory block
 *
 * @ptr: pointer to old allocated memory
 * @old_size: size for old allocated memory in bytes
 * @new_size: new size of the memory block
 *
 * Return: pointer to new allocated memory or returns NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ch;
	unsigned int i, n = new_size;

	/* new pointer assigned to old pointer */
	char *o_ptr = ptr;

	if (ptr == NULL)
	{
		ch = malloc(new_size);
		return (ch);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	ch = malloc(new_size);
	if (ch == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		ch[i] = o_ptr[i];
	free(ptr);
	return (ch);
}

