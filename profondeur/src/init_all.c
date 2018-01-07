/*
** init_all.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/profondeur
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Fri May 13 18:32:13 2016 David Munoz
** Last update Sat May 28 21:02:43 2016 David Munoz
*/

#include "utils.h"
#include "profondeur.h"

t_laby		*init_laby_struct(t_laby *laby, char **av)
{
  int   i;
  int   fd;
  char  *str;
  char  *tmp;

  i = 0;
  if ((fd = open(av[1], O_RDONLY)) == -1)
    return (NULL);
  while ((str = get_next_line(fd)) != NULL)
    {
      if (i == 1)
        tmp = my_fusion_str(tmp, str);
      else
        {
          tmp = my_strdup(str);
          i = 1;
	}
    }
  laby->tab = my_str_to_wordtab(tmp);
  laby->x = 0;
  laby->y = 0;
  close(fd);
  return (laby);
}
