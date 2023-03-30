/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: Thu, 30 Mar 2023
 */

#include <stdio.h>

/**
 * _strcmp - compares two strings s1 and s2
 *
 * @s1: param string 1
 * @s2: param string 2
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
