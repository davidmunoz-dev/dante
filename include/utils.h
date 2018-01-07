/*
** dante.h for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante/include
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Thu May  5 12:32:55 2016 David Munoz
** Last update Sun May 22 22:31:50 2016 David Munoz
*/

#ifndef UTILS_H_
# define UTILS_H_

/* #define _BSD_SOURCE */
/* #define _POSIX_SOURCE */
/* #define _POSIX_C_SOURCE 199309L */

/*
** Include header files
*/
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
# define	USAGE_ERR_GEN		RED"on usage\n [col] [lin] [name] [perfect: 1]\n"BLANK
# define	USAGE_ERR_SOLV		RED"on usage\n./solver [file]\n"BLANK
# define	SIZE_ERR		RED"on size\nMax size : 100*100\nMinimum size : 2*2\n"BLANK
# define	COL_LIN_ERR		RED": Number of columns or lines must be bigger\n"BLANK
# define	ERR_MALL		RED": Malloc failed\n"BLANK
# define	ERR_OPEN		RED": Open failed\n"BLANK
# define	ERR_FILE		RED": Wrong file\n"BLANK
# define	ERR_CHAR		RED": The map of the file must contain '*' and 'X'\n"BLANK
# define	ERR_SIZE		RED"No '\\n' allowed at the end of the map\n"BLANK
# define	ERR_SOLU		RED": No solution\n"

/*
** Macro definition
*/
# define	DN_OK		0
# define	DN_ERR		-1
# define	BUFF_SIZE	4096

#endif /* UTILS_H_ ! */
