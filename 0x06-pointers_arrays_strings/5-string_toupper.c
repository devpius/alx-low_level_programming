/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: Fri, 31 Mar 2023
 */

#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s:string to change to uppercase
 * Return: upper case string
 */
char *string_toupper(char *s)
{

	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
