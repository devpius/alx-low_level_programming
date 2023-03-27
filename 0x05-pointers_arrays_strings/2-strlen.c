/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: 28th-March-2023
 */

#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Description: function that returns the length of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
