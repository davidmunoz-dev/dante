/*
** check.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/profondeur
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Wed May 18 21:51:39 2016 David Munoz
** Last update Sat May 28 20:51:30 2016 David Munoz
*/


#include "profondeur.h"
#include "utils.h"

int		check_empy_file(char *av_file)
{
  int   fd;
  char  *str;

  if ((str = malloc(sizeof(char *) * 2)) == NULL)
    return (cerr_zero(ERROR, ERR_MALL, DN_ERR));
  if ((fd = open(av_file, O_RDONLY)) == DN_ERR)
    return (cerr_zero(ERROR, ERR_OPEN, DN_ERR));
  if (read(fd, str, 1) == DN_ERR)
    return (cerr_zero(ERROR, ERR_CHAR, DN_ERR));
  if (str[0] == '\0')
    return (cerr_zero(ERROR, ERR_CHAR, DN_ERR));
  close(fd);
  return (DN_OK);
}

int		check_file(char **tab)
{
  int   y;
  int   x;

  y = 0;
  while (tab[y])
    {
      x = 0;
      while (tab[y][x])
        {
          if (tab[y][x] != '*'
	      && tab[y][x] != 'X'
	      && tab[y][x] != '\n')
            return (cerr_zero(ERROR, ERR_CHAR, DN_ERR));
          x++;
        }
      y++;
    }
  return (DN_OK);
}

int		check_square(char **tab)
{
  int   i;
  int   tmp;

  tmp = my_strlen(tab[0]);
  i = 0;
  while (tab[i])
    {
      if (my_strlen(tab[i]) != tmp)
	return (cerr_zero(ERROR, ERR_SIZE, DN_ERR));
      i++;
    }
  return (DN_OK);
}

int	check_solver_ok(char **tab)
{
  int	x;
  int	y;

  y = 0;
  while (tab[y])
    {
      x = 0;
      while (tab[y][x])
	{
	  if (tab[y][x] == 'o')
	    return (DN_OK);
	  x++;
	}
      y++;
    }
  return (cerr_zero(ERROR, ERR_SOLU, DN_ERR));
}
