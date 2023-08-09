#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - the get ends of input and addition together for size
 * @s1: the input 1
 * @s2: the input 2
 * Return: concat s1 between s2
 */
char *str_concat(char *s1, char *s2)
{
int x, y, num1, num2, num;
char *result;

num1 = num2 = 0;

if (s1 != NULL)
{
          x = 0;
      while (s1[x++] != '\0')
             num1++;
      }

      if (s2 != NULL)
      {
          x = 0;
      while (s2[x++] != '\0')
             num2++;
      }

      num = num1 + num2;
      result = (char *)malloc(sizeof(char) * (num + 1));
     if (result == NULL)
       return (NULL);

     for (x = 0; x < num1; x++)
           result[x] = s1[x];
     for (y = 0; y < num2; y++, y++)
            result[x] = s2[y];
       result[num] = '\0';

     return (result);
}
