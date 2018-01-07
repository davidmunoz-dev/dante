/*
** my_free_tab.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/my_functions
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Wed May 18 19:46:26 2016 David Munoz
** Last update Sat May 28 00:26:56 2016 David Munoz
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "my.h"
#include "utils.h"

void		free_char_tab(char **tab)
{
  int   i;

  i = 0;
  while (tab[i] != NULL)
    {
      free(tab[i]);
      i++;
    }
  free(tab);
}

void		free_int_tab(int **bool_tab)
{
  int   i;

  i = 0;
  while (bool_tab[i] != NULL)
    {
      free(bool_tab[i]);
      i++;
    }
  free(bool_tab);
}
