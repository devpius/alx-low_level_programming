/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Tue, 11 Apr 2023
 */

#include "main.h"
#include <stdlib.h>
/**
 * create_array - fucntion that creates an aarray of characters
 * and initializes it to a specific char
 * @size: the size of array
 * @c: param of type char to be assigned to the array
 * Return: pointer to array or NULL
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

