/*
** imperfect.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/generateur
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Fri May  6 11:47:07 2016 David Munoz
** Last update Sat May 28 19:57:58 2016 David Munoz
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include "my.h"
#include "generateur.h"
#include "utils.h"

char		**generator(char **tab, t_gen *gen)
{
  if (gen->way2 == (gen->y - 1))
    {
      while (gen->way1 != (gen->x - 1))
        {
          tab[gen->way2][gen->way1] = '+';
          gen->way1 = gen->way1 + 1;
        }
      gen->ok = 1;
    }
  if (gen->way1 == (gen->x - 1))
    {
      while (gen->way2 != (gen->y - 1))
        {
          tab[gen->way2][gen->way1] = '+';
          gen->way2 = gen->way2 + 1;
        }
      gen->ok = 1;
    }
  return (tab);
}

char		**rand_generator(t_gen *gen, char **tab)
{
  int	rand1;
  int	rand2;

  rand1 = rand() % 3;
  rand2 = rand() % 3;
  if (rand2 == 1 && rand1 != 1)
    {
      tab[gen->way2][gen->way1] = '+';
      gen->way2 = gen->way2 + 1;
    }
  else if (rand1 == 1 && rand2 != 1)
    {
      tab[gen->way2][gen->way1] = '+';
      gen->way1 = gen->way1 + 1;
    }
  return (tab);
}

int		path(char **tab, t_gen *gen)
{
  gen->ok = 0;
  gen->way1 = 1;
  gen->way2 = 0;
  while (gen->ok != 1)
    {
      tab = generator(tab, gen);
      tab = rand_generator(gen, tab);
    }
  tab = check_ok(tab);
  print_char_tab(tab);
  if (open_file(tab) == DN_ERR)
    return (DN_ERR);
  return (DN_OK);
}

int	imperfect_labyrinth(char **av)
{
  t_gen	*gen;
  char **tab;

  srand(time(NULL));
  if (!(gen = malloc(sizeof(t_gen))))
    return (cerr_zero(ERROR, ERR_MALL, DN_ERR));
  gen = init_struct_gen(gen, av);
  if ((tab = init_tab_char(gen)) == NULL)
    return (DN_ERR);
  if ((path(tab, gen)) == DN_ERR)
    return (DN_ERR);
  return (DN_OK);
}
