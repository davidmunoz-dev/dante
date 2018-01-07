/*
** main.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/profondeur
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Fri May 13 18:09:29 2016 David Munoz
** Last update Sat May 28 20:56:42 2016 David Munoz
*/

#include "utils.h"
#include "profondeur.h"

void	coord(t_laby *laby)
{
  while (laby->tab[laby->y] != NULL)
    {
      while (laby->tab[laby->y][laby->x] != '\n')
        laby->x = laby->x + 1;
      if (laby->tab[laby->y + 1] != NULL)
        laby->x = 0;
      laby->y = laby->y + 1;
    }
  laby->max = laby->x * laby->y;
}

int	end_bruteforce(t_laby *laby, int done, int x, int y)
{
  if (done == 1)
    {
      laby->tab[y][x] = 'o';
      return (DN_OK);
    }
  return (DN_ERR);
}

int	bruteforce(t_laby *laby, int x, int y)
{
  static int    done = 0;

  if (done != 1)
    {
      laby->tab[y][x] = '$';
      if (x == (laby->x - 1) && y == laby->y - 1)
        {
          done = 1;
          bruteforce(laby, x, y);
        }
      if (laby->tab[y][x + 1] == '*' && done == 0)
        bruteforce(laby, x + 1, y);
      if (y != (laby->y - 1) && laby->tab[y + 1][x] == '*' && done == 0)
        bruteforce(laby, x, y + 1);
      if (y != 0 && laby->tab[y - 1][x] == '*' && done == 0)
        bruteforce(laby, x, y - 1);
      if (x != 0 && laby->tab[y][x - 1] == '*' && done == 0)
        bruteforce(laby, x - 1, y);
    }
  if (end_bruteforce(laby, done, x, y) == DN_OK)
    return (DN_OK);
  return (DN_ERR);
}

void	profondeur(t_laby *laby)
{
  int           x;
  int           y;
  int           x2;
  int           y2;

  x2 = 0;
  y2 = 0;
  x = 0;
  y = 0;
  bruteforce(laby, x, y);
  while (laby->tab[y2] != NULL)
    {
      x2 = 0;
      while (laby->tab[y2][x2] != 0)
        {
          if (laby->tab[y2][x2] == '$')
            laby->tab[y2][x2] = '*';
          my_putchar_modif(laby->tab[y2][x2]);
          x2++;
        }
      if (laby->tab[y2 + 1] != NULL)
        my_putchar('\n');
      y2++;
    }
}

int	main(int ac, char **av)
{
  t_laby       	*laby;

  if (ac != 2)
    return (cerr_zero(ERROR, USAGE_ERR_SOLV, DN_OK));
  if ((laby = malloc(sizeof(t_laby *))) == NULL)
    return (cerr_zero(ERROR, ERR_MALL, DN_ERR));
  if (check_empy_file(av[1]) == DN_ERR)
    return (DN_ERR);
  if ((laby = init_laby_struct(laby, av)) == NULL)
    return (DN_ERR);
  if (check_file(laby->tab)
      || check_square(laby->tab) == DN_ERR)
    return (DN_ERR);
  coord(laby);
  profondeur(laby);
  if (check_solver_ok(laby->tab) == DN_ERR
      || open_file(laby->tab) == DN_ERR)
    return (DN_ERR);
  return (DN_OK);
}
