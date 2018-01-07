/*
** my_print.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/my_functions
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Tue May 10 11:38:56 2016 David Munoz
** Last update Wed May 18 20:10:54 2016 David Munoz
*/

#include "utils.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void	fd_putchar(char c, int fd)
{
  write(fd, &c, 1);
}

void	fd_putstr(char *str, int fd)
{
  write(fd, str, my_strlen(str));
}
