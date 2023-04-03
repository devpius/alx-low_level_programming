/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Mon, 03 Apr 2023
 */

include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept) 
{
	int i = 0, j, k;

	for (j = 0; j[j] !='\0'; j++)
	{
		if(s[j] != 32)
		{
			if (s[x] == accept[y])
				i++;
		}
		else
			return (i);
	}
	return (i);
}
