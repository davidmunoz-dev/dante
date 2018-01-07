/*
** my_str_to_wordtab.c for new in /home/munoz_d/dante/profondeur/src/utils
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Sat May 28 16:52:48 2016 David Munoz
** Last update Sun May 29 22:49:45 2016 David Munoz
*/

#include "utils.h"

int		my_strlen_eol(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\n' && str[i] != '\0')
    i++;
  return (i);
}

char		**malloc_tab(char *str)
{
  char  **tab;
  int   x;
  int   y;
  int   i;

  i = 0;
  y = 0;
  if ((x = my_strlen_eol(str)) < 2 || my_strlen_eol(str) > 500)
    cerr_exit(ERROR_M, MOUL, DN_ERR);
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
        y++;
      i++;
    }
  y++;
  i = 0;
  if ((tab = malloc((sizeof(char *) * y) + 1)) == NULL)
    return (NULL);
  while (i != y)
    {
      tab[i] = malloc((sizeof(char) * x) + 2);
      i++;
    }
  return (tab);
}

char		**my_str_to_wordtab(char *str)
{
  char          **tab;
  int           i;
  int           j;
  int           k;

  i = k = j = 0;
  tab = malloc_tab(str);
  while (str[i] != '\0')
    {
      while (str[i] != '\n' && str[i] != '\0')
        {
          tab[j][k] = str[i];
          i++;
          k++;
        }
      tab[j][k] = '\n';
      tab[j][k + 1] = 0;
      if (str[i] != '\0')
        i = i + 1;
      j = j + 1;
      k = 0;
    }
  tab[j] = NULL;
  return (tab);
}
