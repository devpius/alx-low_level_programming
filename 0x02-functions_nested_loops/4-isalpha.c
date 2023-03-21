/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: 21st-March-2023
 */

#include"main.h"

/**
 * _isalpha - program that checks for alphabetic characters.
 *
 * @c: argument taken in as a character and converted to ASCII
 *
 * Return: Returns 1 if @c is a letter lowercase or uppercase.
 *		otherwise returns 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}

