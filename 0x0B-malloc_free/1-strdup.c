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
	char *cp;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	cp = (char *)malloc((sizeof(char) * len) + 1);
	if (cp == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cp[i] = str[i];
	cp[len] = '\0';

	return (cp);
}
