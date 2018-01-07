/*
** main.c for  in
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Fri May 13 18:09:29 2016 David Munoz
** Last update Sun May 29 22:25:58 2016 David Munoz
*/

#include "largeur.h"
#include "get_next_line.h"
#include "utils.h"

void		result_tab(t_laby *laby)
{
  int   x;
  int   y;
  int   final;

  x = laby->largeur - 1;
  y = laby->hauteur - 1;
  final = laby->int_tab[y][x] - 1;
  laby->tab[y][x] = 'o';
  while (final > 0)
    {
      if (x - 1 >= 0 && laby->int_tab[y][x - 1] == final)
	x--;
      else if (x + 1 < laby->largeur && laby->int_tab[y][x + 1] == final)
	x++;
      else if (y - 1 >= 0 && laby->int_tab[y - 1][x] == final)
	y--;
      else if (y + 1 < laby->hauteur && laby->int_tab[y + 1][x] == final)
	y++;
      laby->tab[y][x] = 'o';
      final -= 1;
    }
  laby->tab[0][0] = 'o';
}

int		main(int ac, char **av)
{
  t_laby	*laby;

  if (ac != 2)
    return (cerr_zero(ERROR, USAGE_ERR_SOLV, DN_OK));
  if ((laby = malloc(sizeof(t_laby *))) == NULL)
    return (cerr_zero(ERROR, ERR_MALL, DN_ERR));
  if (check_empy_file(av[1]) == DN_ERR)
    return (DN_ERR);
  if ((laby = init_struct_laby(laby, av[1])) == NULL)
    return (DN_ERR);
  if (check_file(laby->tab) == DN_ERR
      || check_square(laby->tab) == DN_ERR
      || largeur(laby) == DN_ERR)
    return (DN_ERR);
  result_tab(laby);
  if ((open_file(laby->tab) == DN_ERR))
    return (DN_ERR);
  return (DN_OK);
}
