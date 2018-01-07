/*
** check.c for  in
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Sun May 22 21:52:40 2016 David Munoz
** Last update Sun May 29 22:26:11 2016 David Munoz
*/

#include "largeur.h"
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
  free(str);
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
