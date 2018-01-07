/*
** my_strlen_eol.c for  in /home/munoz_d/dante/largeur/src/utils
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Sun May 29 15:00:38 2016 David Munoz
** Last update Sun May 29 16:51:35 2016 David Munoz
*/

int		my_strlen_eol(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\n' && str[i] != '\0')
    i++;
  return (i);
}
