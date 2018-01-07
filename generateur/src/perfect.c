/*
** perfect.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/generateur
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Fri May  6 11:54:27 2016 David Munoz
** Last update Sat May 28 19:56:45 2016 David Munoz
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "my.h"
#include "utils.h"
#include "generateur.h"

int		perfect_labyrinth(char **av)
{
  char  **tab;

  if ((tab = char_tab(atoi(av[1]), atoi(av[2]))) == NULL)
    return (DN_ERR);
  tab = tab_perfect(tab, atoi(av[1]), atoi(av[2]));
  print_char_tab(tab);
  if ((open_file(tab)) == DN_ERR)
    return (DN_ERR);
  return (DN_OK);
}

char		**char_tab(int x, int y)
{
  char  **tab;
  int   i;
  int   j;

  i = -1;
  if ((tab = malloc(sizeof(char *) * (y))) == NULL)
    return (cerr_msg(ERROR, ERR_MALL));
  while (++i < y)
    {
      j = -1;
      if ((tab[i] = malloc(sizeof(char) * (x))) == NULL)
	return (cerr_msg(ERROR, ERR_MALL));
      while (++j < x)
        tab[i][j] = '*';
      tab[i][j] = '\0';
    }
  tab[i] = NULL;
  return (tab);
}

char		**tab_perfect(char **tab, int x, int y)
{
  int   i;
  int   j;

  i = 1;
  while (i < y)
    {
      j = 0;
      while (j < x)
        tab[i][j++] = 'X';
      i+1 == y ? (tab[i][x-1] = '*') : (tab[i][rand() % x] = '*');
      i+1 == y ? i++ : (i = i + 2);
    }
  return (tab);
}
