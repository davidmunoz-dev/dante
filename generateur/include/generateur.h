/*
** generateur.h for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/include
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Fri May 20 13:43:29 2016 David Munoz
** Last update Sat May 28 19:52:51 2016 David Munoz
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
  int           way1;
  int           way2;
  int           ok;
}               t_gen;

/*
** main.c
*/
int	check_arg(int ac, char **av);

/*
** check.c
*/
char	**check_ok(char **tab);

/*
** imperfect.c
*/
char	**generator(char **tab, t_gen *gen);
char	**rand_generator(t_gen *gen, char **tab);
int	path(char **tab, t_gen *gen);
int	imperfect_labyrinth(char **av);

/*
** init_tabs.c
*/
char	**gener(t_gen *gen, char **tab);
t_gen	*init_struct_gen(t_gen *gen, char **av);
char            **init_tab_char(t_gen *gen);

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
