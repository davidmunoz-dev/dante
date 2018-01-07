/*
** utils.c for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/generateur
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Fri May 13 18:54:15 2016 David Munoz
** Last update Sun May 22 14:48:51 2016 David Munoz
*/

#include "utils.h"
#include "my.h"

int		getlines(char *av_file)
{
  struct stat   sb;
  FILE	*fichier;
  char  *str;
  int   lines;

  stat(av_file,&sb);
  lines = 0;
  if ((str = malloc(sb.st_size)) == NULL)
    return (cerr_zero(ERROR, ERR_MALL, DN_ERR));
  if ((fichier = fopen(av_file, "r")) == NULL)
    return (cerr_zero(ERROR, ERR_OPEN, DN_ERR));
  while ((str = fgets(str, sb.st_size, fichier)) != NULL)
    {
      if (my_strlen(str) > 100 || my_strlen(str) < 2)
      	return (cerr_zero(ERROR, SIZE_ERR, DN_ERR));
      lines++;
    }
  fclose(fichier);
  return (lines);
}
