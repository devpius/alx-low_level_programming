/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Wed, 12 Apr 2023
 */

#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatinates all args passed to the program
 * @ac: arguments number
 * @av: array of arguments
 * Return: Always 0 (Success)
*/
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			l++;
		l++;
	}

	str = (char *)malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < l; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
