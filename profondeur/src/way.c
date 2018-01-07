/*
** way.c for new in /home/munoz_d/dante/profondeur/src
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Sat May 28 16:56:48 2016 David Munoz
** Last update Sat May 28 20:59:23 2016 David Munoz
*/

#include "profondeur.h"
#include "utils.h"

char	*my_fusion_str(char *str1, char *str2)
{
  int   i;
  int   k;
  int   slen;
  char  *fusion;

  if (!(fusion = malloc(sizeof(char) * (my_strlen(str1)+ my_strlen(str2) + 2))))
    return (0);
  slen = my_strlen(str1);
  i = -1;
  while (++i != slen)
    fusion[i] = str1[i];
  fusion[i] = '\n';
  i += 1;
  slen = my_strlen(str2);
  k = -1;
  while (++k != slen)
    {
      fusion[i] = str2[k];
      i++;
    }
  fusion[i] = 0;
  return (fusion);
}
