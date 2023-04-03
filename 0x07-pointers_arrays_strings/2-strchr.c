/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Mon, 03 Apr 2023
 */

#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @c: occurence of the character
 * @s: string to be checked
 *
 * Return: pointer to first occurence of a character else NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	
	return (NULL);
}

