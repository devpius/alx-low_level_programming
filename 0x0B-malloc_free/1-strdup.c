/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Tue, 11 Apr 2023
 */

#include "main.h"
#include <stdlib.h>
/**
 * _strdup - fucntion that creates an aarray of characters
 * @str: source string of type char
 * Return: pointer to a newly allocated space in memory or Null if
 * if insufficient memory
*/

char *_strdup(char *str)
{
	char *copy;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	copy = (char *)malloc((sizeof(char) * length) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];
	copy[length] = '\0';

	return (copy);
}
