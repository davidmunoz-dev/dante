/*
** my_strdup.c for dup in /home/munoz_d/dante/profondeur/src/utils
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Sat May 28 16:59:13 2016 David Munoz
** Last update Sat May 28 21:01:02 2016 David Munoz
*/

#include "utils.h"

char		*my_strdup(char *str)
{
  char  *dest;

  if (!(dest = (char *)malloc(sizeof(char) * my_strlen(str) + 1)))
    return (NULL);
  dest = strcpy(dest, str);
  dest[my_strlen(str)] = 0;
  return (dest);
}
