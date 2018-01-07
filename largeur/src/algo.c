/*
** algo.c for  in
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Sun May 22 21:52:32 2016 David Munoz
** Last update Sun May 29 16:46:28 2016 David Munoz
*/

#include "get_next_line.h"
#include "largeur.h"
#include "utils.h"

void		check_around(t_laby *laby, int x, int y)
{
  if (y + 1 < laby->largeur && laby->int_tab[y + 1][x] == 0)
    {
      laby->int_tab[y + 1][x] = laby->way + 1;
      laby->i += 1;
    }
  if (y - 1 >= 0 && laby->int_tab[y - 1][x] == 0)
    {
      laby->int_tab[y - 1][x] = laby->way + 1;
      laby->i += 1;
    }
  if (x - 1 >= 0 && laby->int_tab[y][x - 1] == 0)
    {
      laby->int_tab[y][x - 1] = laby->way + 1;
      laby->i += 1;
    }
  if (x + 1 < laby->largeur && laby->int_tab[y][x + 1] == 0)
    {
      laby->int_tab[y][x + 1] = laby->way + 1;
      laby->i += 1;
    }
}

int		way(t_laby *laby)
{
  int   x;
  int   y;

  laby->i = 0;
  y = -1;
  while (++y < laby->largeur)
    {
      x = -1;
      while (++x < laby->largeur)
	if (laby->int_tab[y][x] == laby->way)
	  check_around(laby, x, y);
    }
  if (laby->i == 0)
    return (DN_ERR);
  return (DN_OK);
}

int		largeur(t_laby *laby)
{
  laby->way = 1;
  if (laby->int_tab[0][0] == -1 || (laby->largeur == 1 && laby->largeur == 1))
    return (DN_ERR);
  if (laby->int_tab[0][1] == 0)
    laby->int_tab[0][1] = 1;
  if (laby->int_tab[1][0] == 0)
    laby->int_tab[1][0] = 1;
  while (laby->int_tab[laby->largeur - 1][laby->largeur - 1] == 0)
    {
      if (way(laby) == DN_ERR)
        return (cerr_zero(ERROR, ERR_SOLU, DN_ERR));
      laby->way += 1;
    }
  return (DN_OK);
}
