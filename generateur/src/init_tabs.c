/*
** init_tabs.c for  in /dante/generateur
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Tue May 10 14:44:55 2016 David Munoz
** Last update Sat May 28 20:01:02 2016 David Munoz
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include "utils.h"
#include "my.h"
#include "generateur.h"

t_gen		*init_struct_gen(t_gen *gen, char **av)
{
  gen->x = atoi(av[1]);
  gen->y = atoi(av[2]);
  return (gen);
}


char		**gener(t_gen *gen, char **tab)
{
  int   y;
  int   x;

  y = 0;
  while (y != gen->y)
    {
      x = 0;
      tab[0][0] = '+';
      while (x != gen->x)
        {
          rand() % 3 == 1 ? (tab[y][x] = 'X') : (tab[y][x] = 'o');
          x++;
        }
      tab[y][x] = '\n';
      y++;
    }
  tab[gen->y - 1][gen->x - 1] = '+';
  tab[y] = NULL;
  return (tab);
}

char		**init_tab_char(t_gen *gen)
{
  char **tab;
  int   i;

  i = -1;
  if (!(tab = malloc(sizeof(char *) * (gen->y + 1))))
    return (cerr_msg(ERROR, ERR_MALL));
  while (++i != gen->y)
    if (!(tab[i] = malloc(sizeof(char) * gen->x + 1)))
      return (cerr_msg(ERROR, ERR_MALL));
  tab = gener(gen, tab);
  return (tab);
}
