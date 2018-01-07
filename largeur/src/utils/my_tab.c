/*
** my_tab.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/my_functions
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Tue May 10 13:56:54 2016 David Munoz
** Last update Sun May 22 22:11:19 2016 David Munoz
*/

#include "utils.h"
#include "my.h"

void	print_char_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      if (tab[i+1] != NULL)
	my_putchar('\n');
      i++;
    }
}

void	print_int_tab(int **bool_tab)
{
  int	i;
  int	j;

  i = 0;
  while (bool_tab[i] != NULL)
    {
      j = 0;
      while (bool_tab[i][j] != '\0')
	{
	  my_put_nbr(bool_tab[i][j]);
	  j++;
	}
      my_putchar('\n');
      i++;
    }
  my_putchar('\n');
  my_putchar('\n');
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

void	solver_char_tab(char **tab)
{
  int	y;
  int	x;

  y = 0;
  my_putstr(BLUE"\nSolver : \n"BLANK);
  while (tab[y] != NULL)
    {
      x = 0;
      while (tab[y][x] != '\0')
	{
	  if (tab[y][x] == 'o')
	    {
	      my_putstr(GREEN"o"BLANK);
	    }
	  else
	    my_putchar(tab[y][x]);
	  x++;
	}
      my_putchar('\n');
      y++;
    }
}

void	profondeur_char_tab(char **tab)
{
  int	y;
  int	x;

  y = 0;
  my_putstr(BLUE"\nSolver : \n"BLANK);
  while (tab[y] != NULL)
    {
      x = 0;
      while (tab[y][x] != '\0')
	{
	  if (tab[y][x] == 'o')
	    {
	      my_putstr(GREEN"o"BLANK);
	    }
	  else
	    my_putchar(tab[y][x]);
	  x++;
	}
      y++;
    }
}
