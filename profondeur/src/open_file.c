/*
** open_file.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/generateur
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Tue May 10 14:40:56 2016 David Munoz
** Last update Sat May 28 20:50:03 2016 David Munoz
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "my.h"
#include "utils.h"
#include "profondeur.h"

int	fd_putstr_eol(char *str, FILE* fichier)
{
  int   i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (str[i] == '\n')
        return (0);
      fprintf(fichier, "%c", str[i]);
    }
  return (1);
}

void	fd_char_tab(char **tab, FILE* fichier)
{
  int   i;

  i = 0;
  while (tab[i] != NULL)
    {
      fd_putstr_eol(tab[i], fichier);
      if (tab[i + 1] != NULL)
	fprintf(fichier, "\n");
      i++;
    }
}

int		open_file(char **tab)
{
  FILE  *fichier;

  if ((fichier = fopen("solution.txt", "w+")) == NULL)
    return (cerr_zero(ERROR, ERR_OPEN, DN_ERR));
  fd_char_tab(tab, fichier);
  fclose(fichier);
  return (DN_OK);
}
