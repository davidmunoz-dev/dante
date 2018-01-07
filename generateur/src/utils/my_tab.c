/*
** my_tab.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/my_functions
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Tue May 10 13:56:54 2016 David Munoz
** Last update Sat May 28 20:01:25 2016 David Munoz
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "utils.h"
#include "my.h"

int	my_putstr_eol(char *str)
{
  int   i;

  i = -1;
  while (str[++i] != '\0')
    {
      if (str[i] == '\n')
        return (0);
      my_putchar(str[i]);
    }
  return (1);
}

void	print_char_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      my_putstr_eol(tab[i]);
      if (tab[i + 1] != NULL)
        my_putchar('\n');
      i++;
    }
}

void	print_fd_tab(char **tab, int fd)
{
  int   i;

  i = 0;
  while (tab[i])
    {
      fd_putstr(tab[i], fd);
      if (tab[i+1] != NULL)
	fd_putchar('\n', fd);
      i++;
    }
}
