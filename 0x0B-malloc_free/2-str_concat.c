/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Tue, 11 Apr 2023
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - fucntion that concatinates 2 strings.
 * @s1: first string to be concatinated to
 * @s2: second string to be concatinated
 *
 * Return: pointer to a newly allocated space in memory which
 * contains string s1, followed string s2,
 * and a nullbyte or NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, len_s1, len_s2, len;
	char *res;

	len_s1 = len_s2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len_s1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len_s2++;
	}

	len = len_s1 + len_s2;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		res[i] = s1[i];
	for (j = 0; j < len_s2; j++, i++)
		res[i] = s2[j];
	res[len] = '\0';

	return (res);
}
