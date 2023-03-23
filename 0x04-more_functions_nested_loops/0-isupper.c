/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: 23rd-March-2023
 */

#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
