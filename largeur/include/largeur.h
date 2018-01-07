/*
** largeur.h for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/include
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Sun May 22 22:04:29 2016 David Munoz
** Last update Sun May 29 16:49:50 2016 David Munoz
*/

#ifndef LARGEUR_H_
# define LARGEUR_H_

typedef struct	s_laby
{
  int	largeur;
  int	hauteur;
  int	**int_tab;
  char	**tab;
  int	way;
  int	i;
}		t_laby;


/*
** check.c
*/
int	check_empy_file(char *av_file);
int	check_file(char **tab);
int	check_square(char **tab);


/*
** open_file.c
*/
int	open_file(char **tab);

/*
** algo.c
*/
int	largeur(t_laby *laby);

/*
** main.c
*/
void	result_tab(t_laby *laby);

/*
** init.c
*/
t_laby	*init_struct_laby(t_laby *laby, char *av_file);

#endif /* !LARGEUR__H_ */
