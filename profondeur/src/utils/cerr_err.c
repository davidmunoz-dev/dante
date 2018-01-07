/*
** cerr_err.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/my_functions
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Thu May  5 12:45:19 2016 David Munoz
** Last update Sat May 28 18:30:16 2016 David Munoz
*/

#include "utils.h"
#include "my.h"

int	cerr_zero(char *log, char *info, int status)
{
  write(2, log, strlen(log));
  write(2, info, strlen(info));
  return (status);
}

void	*cerr_msg(char *log, char *info)
{
  write(2, log, my_strlen(log));
  write(2, info, my_strlen(info));
  return (NULL);
}

void	cerr_exit(char *log, char *info, int status)
{
  write(2, log, strlen(log));
  write(2, info, strlen(info));
  exit(status);
}
