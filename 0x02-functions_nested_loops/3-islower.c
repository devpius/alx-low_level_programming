/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: 21st-March-2023
 */

#include"main.h"

/**
 * _islower - function to check if character is lowercase.
 *
 * @c: character argument, converted to ASCII
 *
 * Return: Returns (1) Failure if @c is lowercase
 *		otherwise always (0) Success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

