/*
** find_path.c for new in /home/munoz_d/dante/generateur/src
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Sat May 28 00:34:12 2016 David Munoz
** Last update Sat May 28 19:33:01 2016 David Munoz
*/

#include <unistd.h>

char		**check_ok(char **tab)
{
  int   y;
  int   x;

  y = 0;
  while (tab[y] != NULL)
    {
      x = 0;
      while (tab[y][x] != '\n')
        {
          if (tab[y][x] == '+')
            tab[y][x] = '*';
          else if (tab[y][x] == 'o')
            tab[y][x] = '*';
	  x++;
        }
      y++;
    }
  return (tab);
}
