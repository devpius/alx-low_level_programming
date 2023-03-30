/*
 * Author: Gabula Pius << devpius >>
 * Email: mcduell24@gmail.com
 * Date: Thu, 30 Mar 2023 17:45:57 +0300
 */


/**
 * _strcat - function that concatenates two strings
 *
 * @dest: parameter to concatenate to
 * @src: parameter to be concatenated
 *
 * Return: returns concatinated string @dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	/* find the size of dest without null byte */
	while (dest[i])
		i++;
	/* iterating through src overwritting the @dest nullbyte with src chars */
	for (j = 0; src[j]; j++)
		dest[i + j] = src[j];

	/* appending a nullbyte at the end of the string */
	dest[i + j] = '\0';

	return (dest);
}
