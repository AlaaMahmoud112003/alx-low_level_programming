#include <stdlib.h>
#include "main.h"
/**
 * count_word - helpe function to count number of the words in  string
 * @s: string to  be evaluated
 *
 * Return: num of the words
 */
int count_word(char *s)
{
	int num, a, b;

	num = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			num = 0;
		else if (num == 0)
		{
			num = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - a string the split into words
 * @str: the string to be splited
 *
 * Return: pointer the array
 */
char **strtow(char *str)
{
	char **max, *tamp;
	int a, b = 0, num = 0, word, c = 0, start, end;

	while (*(str + num))
		num++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	max = (char **) malloc(sizeof(char *) * (word + 1));
	if (max == NULL)
		return (NULL);

	for (a = 0; a <= num; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tamp = (char *) malloc(sizeof(char) * (c + 1));
				if (tamp == NULL)
					return (NULL);
				while (start < end)
					*tamp++ = str[start++];
				*tamp = '\0';
				max[b] = tamp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	max[b] = NULL;

	return (max);
}
