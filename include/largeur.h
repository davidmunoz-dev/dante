/*
** largeur.h for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/include
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Sun May 22 22:04:29 2016 David Munoz
** Last update Sun May 22 22:05:03 2016 David Munoz
*/

#ifndef LARGEUR_H_
# define LARGEUR_H_

typedef struct  s_prim
{
  int           *prim_x;
  int           *prim_y;
}		t_prim;

typedef struct  s_gen
{
  char          **tab;
  int           **bool;
  int           x;
  int           y;
  int           fd;
}               t_gen;

typedef struct  s_case
{
  int           x;
  int           y;
  int		d;
}               t_case;

char    **gen_perfect(int , int);
char    **draw_perfect(char **, int , int);

/*
** check.c
*/
int	check_empy_file(char *av_file);
int    check_file(char **tab);
int	check_square(char **tab);


/*
** largeur.c
*/
void	add_curs(int x, int y, t_case *curs);
void	move_curs(int *x, int *y, t_case *curs);
int	print_solver(t_gen *gen, t_case **prec);
int	check_if_ok(t_gen *gen, int x, int y, t_case **prec);
int	find_path(t_case **prec, t_case *queue, t_gen *gen, t_prim prim);
int	largeur(t_gen *gen);

/*
** init.c
*/
int     **init_bool(t_gen *gen);
t_gen	*init_struct_gen_solver(t_gen *gen, char *av_file);
t_prim   init_prim();
t_case **init_prec(t_gen *gen);

char    **tab_fichier(char *av_file);
void    change_tab_to_result(t_gen *gen, t_case **prec);

void    add_curs(int x, int y, t_case *curs);
void    move_curs(int *x, int *y, t_case *curs);


#endif /* !LARGEUR__H_ */
