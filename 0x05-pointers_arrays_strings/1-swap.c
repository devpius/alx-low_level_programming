/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: 28th-March-2023
 */

#include "main.h"
/**
* swap_int - swaps the value of int a and int b
* @a: first int
* @b: second int
* Return 0
*/
void swap_int(int *a, int *b)
{
		int s;

		s = *a;
		*a = *b;
		*b = s;
}
