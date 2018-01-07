/*
** my.h for EXERCICE 2 in /home/munoz_d/rendu/Piscine_C_J09
**
** Made by munoz david
** Login   <munoz_d@epitech.net>
**
** Started on  Fri Oct  9 13:51:01 2015 munoz david
** Last update Sat May 28 20:53:21 2016 David Munoz
*/

#ifndef MY_H_
# define MY_H_

# define READ_SIZE	100

/*
**	Fonctions de bases
*/
int	cerr_zero(char *log, char *info, int status);
void	*cerr_msg(char *log, char *info);
void	cerr_exit(char *log, char *info, int status);
int	my_getnbr(char *str);
void    my_putchar(char c);
int     my_strlen(char *str);
void    my_putstr(char *str);
void    fd_putchar(char c, int fd);
void    fd_putstr(char *str, int fd);
char	*my_strcat(char *dest, char *str);
void	free_char_tab(char **tab);
void	free_int_tab(int **bool_tab);
void	print_tab(char **tab);
void	print_int_tab(int **bool_tab);
void	print_char_tab(char **tab);
void	print_fd_tab(char **tab, int fd);
int	my_putstr_modif(char *str);
char    **my_str_to_wordtab(char *str);
char    *get_next_line(const int fd);
char    *my_strdup(char *str);
int      my_putchar_modif(char c);

#endif /* !MY_H_ */