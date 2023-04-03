/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Mon, 03 Apr 2023
 */

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first occurrence in the string
 *
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int j;
		while (*s)
		{
			for (j = 0; accept[j]; j++)
			{
				if (*s == accept[j])
					return (s);
			}
			s++;
		}
	return (NULL);
}
