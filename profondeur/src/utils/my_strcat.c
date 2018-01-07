/*
** my_strcat.c for  in /rendu_IA/dante/my_functions
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Tue May 10 11:52:57 2016 David Munoz
** Last update Sun May 22 14:51:01 2016 David Munoz
*/

#include "utils.h"
#include "my.h"

char	*my_strcat(char *dest, char *src)
{
  int   i;
  int   j;
  char  *str;

  i = 0;
  j = 0;
  str = malloc(sizeof(str) * (my_strlen(dest) + my_strlen(src) + 1));
  while (dest[i])
    {
      str[i] = dest[i];
      i++;
    }
  while (src[j])
    {
      str[i] = src[j];
      i++;
      j++;
    }
  str[i] = '\0';
  return (str);
}
