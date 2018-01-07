/*
** dante.h for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/include
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Thu May  5 12:32:55 2016 David Munoz
** Last update Sun May 29 00:27:57 2016 David Munoz
*/

#ifndef UTILS_H_
# define UTILS_H_

#include <sys/types.h>
#include <sys/stat.h>

/*
** Color macro definition
*/
# define RED                    "\033[1;31m"
# define GREEN                  "\033[1;32m"
# define PURPLE                 "\033[1;35m"
# define CYAN                   "\033[1;36m"
# define BROWN                  "\033[0;33m"
# define BLUE                   "\033[1;34m"
# define YELLOW                 "\033[1;33m"
# define BLANK                  "\033[0m"

/*
** Error macro definition
*/
# define	ERROR			RED"Error "BLANK
# define	USAGE_ERR_GEN		RED"on usage\n[col] [lin] OPTIONAL : [parfait]\n"BLANK
# define	ERR_MALL		RED": Malloc failed\n"BLANK
# define	ERR_OPEN		RED": Open failed\n"BLANK
# define	ERR_FILE		RED": Wrong file\n"BLANK
# define	COL_LIN_ERR		RED": Number of column\
s or lines must be bigger\n"BLANK

/*
** Macro definition
*/
# define	DN_OK		0
# define	DN_ERR		-1
# define	BUFF_SIZE	4096

#endif /* UTILS_H_ ! */
