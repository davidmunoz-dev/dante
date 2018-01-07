/*
** dante.h for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/include
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Thu May  5 12:32:55 2016 David Munoz
** Last update Sun May 29 22:50:28 2016 David Munoz
*/

#ifndef UTILS_H_
# define UTILS_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

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
# define	USAGE_ERR_SOLV		RED"on usage\n./solver [file]\n"BLANK
# define	SIZE_ERR		RED"on size\nMinimum size : 2*2\n"BLANK
# define	COL_LIN_ERR		RED": Number of columns or lines must be bigger\n"BLANK
# define	ERR_MALL		RED": Malloc failed\n"BLANK
# define	ERR_OPEN		RED": Open failed\n"BLANK
# define	ERR_FILE		RED": Wrong file\n"BLANK
# define	ERR_CHAR		RED": The map of the file must contain '*' and 'X'\n"BLANK
# define	ERR_SIZE		RED": This map is not rectangular\n"BLANK
# define	ERR_SOLU		RED": No solution\n"
# define        ERROR_M			RED"Error : Minimum size : 2*2\nMax size : 500*500\n"BLANK
# define        MOUL			RED"[1000*1000Fonctional but time out on moulinette <3]\n"BLANK

/*
** Macro definition
*/
# define	DN_OK		0
# define	DN_ERR		-1
# define	BUFF_SIZE	4096

#endif /* UTILS_H_ ! */
