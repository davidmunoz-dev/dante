/*
** profondeur.h for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/include
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Fri May 20 13:52:29 2016 David Munoz
** Last update Sun May 22 22:05:38 2016 David Munoz
*/

#ifndef PROFONDEUR_H_
# define PROFONDEUR_H_

typedef struct  s_gen
{
  int           x;
  int           y;
  int           fd;
  int           **bool;
  char          **tab;
}               t_gen;

typedef struct  s_case
{
  int           x;
  int           y;
  int           d;
}               t_case;

typedef struct  s_prim
{
  int           *prim_x;
  int           *prim_y;
}               t_prim;

/*
** init_all.c
*/
t_prim          *init_prim();
t_case          **init_prec(t_gen *gen);
int             **init_tab_bool(t_gen *gen);
t_gen   *init_struct_gen_solver(t_gen *gen, char *av_file);
char    **tab_fichier(char *av_file, t_gen *gen);

/*
** path.c
*/
int     **right_way(t_gen *gen, t_case case_prev, t_case **prec);
int     **init_way(t_gen *gen);

/*
** check.c
*/
int	check_empy_file(char *av_file);
int     check_file(char **tab);
int     check_square(char **tab);

/*
** main.c
*/
int     findTheWayRec(t_gen *gen, int x, int y, t_case **prec);
int     print_solver(t_gen *gen, t_case **prec);
void    change_tab_to_result(t_gen *gen, t_case **prec);

#endif /* PROFONDEUR_H_  */
