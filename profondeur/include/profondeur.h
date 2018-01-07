/*
** profondeur.h for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/include
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Fri May 20 13:52:29 2016 David Munoz
** Last update Sat May 28 20:58:38 2016 David Munoz
*/

#ifndef PROFONDEUR_H_
# define PROFONDEUR_H_

typedef struct  s_laby
{
  int           x;
  int           y;
  char          **tab;
  unsigned int	max;
}               t_laby;

/*
** init_all.c
*/
t_laby	*init_laby_struct(t_laby *laby, char **av);


/*
** open_file.c
*/
int	open_file(char **tab);

/*
** check.c
*/
int	check_empy_file(char *av_file);
int     check_file(char **tab);
int     check_square(char **tab);
int	check_solver_ok(char **tab);

/*
** way.c
*/
char    *my_fusion_str(char *str1, char *str2);

/*
** main.c
*/

#endif /* PROFONDEUR_H_  */
