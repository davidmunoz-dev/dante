/*
** my_put_nbr.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/my_functions
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Tue May 10 15:42:21 2016 David Munoz
** Last update Sun May 22 14:49:11 2016 David Munoz
*/

#include "utils.h"
#include "my.h"

int	my_put_nbr(int nbr)
{
  int   neg;

  neg = 0;
  if (nbr < 0)
    {
      my_putchar('-');
      if (nbr == -2147483648)
        {
          neg = 1;
          nbr++;
        }
      nbr = nbr * -1;
    }
  if (nbr >= 10)
    my_put_nbr(nbr / 10);
  if (neg == 1)
    {
      neg = 0;
      my_putchar(nbr % 10 + '1');
    }
  else
    my_putchar(nbr % 10 + '0');
  return (0);
}
