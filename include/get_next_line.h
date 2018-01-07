/*
** get_next_line.h for hi in /rendu_ProgElem/CPE_2015_getnextline
**
** Made by Munoz David
** Login   <munoz_d@epitech.net>
**
** Started on  Mon Jan 11 23:09:01 2016 Munoz David
** Last update Sun May 22 22:28:45 2016 David Munoz
*/

#ifndef READ_SIZE

# define READ_SIZE (300)

#endif /* !READ_SIZE */

#ifndef GNL_H_
# define GNL_H_

int     my_gnl_read(char *buffer, const int fd, int *i);
char    *my_gnl_strcpy(char *source, char c, int lenght_line);
char    *my_gnl_error(char *line, int i, int lenght_read, int lenght_line);
char    *get_next_line(const int fd);

#endif /* !GNL_H_ */
