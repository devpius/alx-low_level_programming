/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Wed, 12 Apr 2023
 */

#include <stdlib.h>
#include "main.h"
/**
 * strtow - splits a string into words.
 * @str: string to be split
 * Return: pointer to the array of strings
*/
char **strtow(char *str)
{
	int i, ch, _len;
	char **strs;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = ch = _len = 0;
	while (str[i])
	{
		if (ch == 0 && str[i] != ' ')
			ch = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			ch = 0;
			_len++;
		}
		i++;
	}

	_len += ch == 1 ? 1 : 0;
	if (_len == 0)
		return (NULL);

	strs = (char **)malloc(sizeof(char *) * (_len + 1));
	if (strs == NULL)
		return (NULL);

	util(strs, str);
	strs[_len] = NULL;
	return (strs);
}

/**
 * util - a util function for fetching words into an array
 * @strs: the strings array
 * @str: the string
 */
void util(char **strs, char *str)
{
	int i, j, start, ch;

	i = j = ch = 0;
	while (str[i])
	{
		if (ch == 0 && str[i] != ' ')
		{
			start = i;
			ch = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_word(strs, str, start, i, j);
			j++;
			ch = 0;
		}

		i++;
	}

	if (ch == 1)
		create_word(strs, str, start, i, j);
}

/**
 * create_word - creates a word and insert it into the array
 * @words: array of strings
 * @str: param string
 * @start: index 0 of the word
 * @end: end index of the word
 * @index: the index of the array to insert the word
 */
void create_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}
