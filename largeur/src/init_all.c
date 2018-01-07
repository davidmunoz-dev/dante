/*
** init_all.c for  in
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Fri May 13 18:10:29 2016 David Munoz
** Last update Sun May 29 22:31:20 2016 David Munoz
*/

#include "largeur.h"
#include "get_next_line.h"
#include "utils.h"

void		my_new_alloc(char ***tab, int i, char *buffer)
{
  if (i == 0)
    *tab = malloc(sizeof(char *) * 1);
  else
    *tab = realloc(*tab, (sizeof(char *) * (i + 1)));
  (*tab)[i] = buffer;
}

char		**read_file(char *file)
{
  char  **tab;
  char  *buffer;
  int   fd;
  int   i;

  i = 0;
  if ((fd = open(file, O_RDONLY)) == DN_ERR)
    return (cerr_msg(ERROR, ERR_OPEN));
  while ((buffer = get_next_line(fd)) != 0)
    {
      if (buffer[0] != '\0')
        {
          my_new_alloc(&tab, i, buffer);
          i++;
        }
    }
  tab = realloc(tab, (sizeof(char *) * (i + 1)));
  tab[i] = NULL;
  close(fd);
  return (tab);
}

int		**init_bool(t_laby *laby)
{
  int   y;
  int   x;
  int   **int_tab;

  y = 0;
  if ((int_tab = malloc(sizeof(int *) * laby->hauteur + 1)) == NULL)
    return (NULL);
  while (laby->tab[y])
    {
      x = 0;
      if ((int_tab[y] = malloc(sizeof(int) * laby->largeur + 1)) == NULL)
        return (NULL);
      while (laby->tab[y][x])
        {
          if (laby->tab[y][x] == 'X')
            int_tab[y][x] = -1;
          if (laby->tab[y][x] == '*')
            int_tab[y][x] = 0;
	  x++;
        }
      y++;
    }
  return (int_tab);
}

t_laby		*init_struct_laby(t_laby *laby, char *av_file)
{
  if ((laby->hauteur = getlines(av_file)) == DN_ERR)
    return (NULL);
  if ((laby->tab = read_file(av_file)) == NULL)
    return (NULL);
  laby->largeur = my_strlen_eol(laby->tab[0]);
  if ((laby->int_tab = init_bool(laby)) == NULL)
    return (cerr_msg(ERROR, ERR_MALL));
  if (laby->tab == NULL && laby->tab[0] == NULL)
    return (cerr_msg(ERROR, ERR_FILE));
  return (laby);
}
