/*
** my_putchar_eol.c for  in /home/munoz_d/dante/profondeur/src/utils
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Sat May 28 17:01:09 2016 David Munoz
** Last update Sat May 28 21:00:24 2016 David Munoz
*/

#include <unistd.h>

int		my_putchar_modif(char c)
{
  if (c == '\n')
    return (0);
  write(1, &c, 1);
  return (1);
}
