/*
** main.c for  in /dante/generateur
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Thu May  5 12:56:49 2016 David Munoz
** Last update Sun May 29 00:26:34 2016 David Munoz
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "my.h"
#include "generateur.h"
#include "utils.h"

int		check_arg(int ac, char **av)
{
  if ((atoi(av[1]) < 2 && my_getnbr(av[1]) < 2)
      || (atoi(av[2]) < 2 && my_getnbr(av[2]) < 2))
    return (cerr_zero(ERROR, COL_LIN_ERR, DN_ERR));
  if (ac == 4 && my_strncmp("parfait", av[3], 7) == 0)
    {
      if (perfect_labyrinth(av) == DN_ERR)
	return (DN_ERR);
    }
  else if (ac == 3)
    if (imperfect_labyrinth(av) == DN_ERR)
      return (DN_ERR);
  return (DN_OK);
}

int		main(int ac, char **av)
{
  if (ac < 3)
    return (cerr_zero(ERROR, USAGE_ERR_GEN, DN_ERR));
  if (check_arg(ac, av) == DN_ERR)
    return (DN_ERR);
  return (DN_OK);
}
