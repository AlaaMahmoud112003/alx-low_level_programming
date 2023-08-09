#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  the duplication to new memory space in the location
 * @str: the char
 * Return:  Always 0 is (successed
 */
char *_strdup(char *str)
{
	char *ala;
	int y, x = 0;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;

	ala = malloc(sizeof(char) * (y + 1));

	if (ala == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		ala[x] = str[x];

	return (ala);
}
