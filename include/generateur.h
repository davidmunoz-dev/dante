/*
** generateur.h for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/include
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Fri May 20 13:43:29 2016 David Munoz
** Last update Fri May 20 18:06:58 2016 David Munoz
*/

#ifndef GEN_H_
# define GEN_H_

/*
**_____________
**  GENERATEUR
**_____________
*/
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
}		t_prim;


int     debut;
int     fin;

/*
** main.c
*/
int             check_arg(int ac, char **av);

/*
** imperfect.c
*/
void            start_imperfect(t_gen *gen);
int             check_end(t_gen *gen);
int             imperfect_labyrinth(char **av);

/*
** init_tabs.c
*/
int             **init_tab_bool(t_gen *gen);
char            **init_tab_char(t_gen *gen);
t_prim		*init_prim();
t_gen           *init_struct_gen(t_gen *gen, char **av);
t_case		**init_prec(t_gen *gen);

/*
** find_path.c
*/
void		add_curs(int x, int y, t_case *curs);
void            move_curs(int *x, int *y, t_case *curs);
int             find_path(t_case *queue, t_gen *gen, t_prim *prim);

/*
** open_file.c
*/
int		open_file(char **av);

/*
** perfect.c
*/
int             perfect_labyrinth(char **av);
char            **char_tab(int x, int y);
char            **tab_perfect(char **tab, int x, int y);

#endif /* GEN_H_! */
