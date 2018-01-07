##
## Makefile for  in /home/munoz_d/Epitech/rendu/rendu_IA/dante
## 
## Made by David Munoz
## Login   <munoz_d@epitech.net>
## 
## Started on  Thu May  5 12:48:36 2016 David Munoz
## Last update Sat May 28 20:53:32 2016 David Munoz
##

TARGET	 = solver

CC	 = gcc

SRC	 = check.c	\
	   init_all.c	\
	   way.c	\
	   open_file.c	\
	   main.c	\

UTILS	 = my_free_tab.c	\
	my_put_nbr.c		\
	my_tab.c		\
	my_strcat.c		\
	my_print.c		\
	cerr_err.c		\
	my_str_to_wordtab.c	\
	get_next_line.c		\
	my_putchar_eol.c	\
	my_strdup.c

CFLAGS	 = -W -Wall -Werror -ansi -pedantic -Iinclude

SRCDIR	 = src
UTILDIR	 = src/utils/
UTILSDIR = obj/utils/
OBJDIR	 = obj

SOURCES  := $(addprefix src/, $(SRC))		\
        $(addprefix src/utils/, $(UTILS))

OBJECTS  := $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

rm       = rm -rf
mkdir    = mkdir -p

$(TARGET) : $(OBJECTS)
	@$(CC) $(CFLAGS) -o $@ $(OBJECTS)
	@echo "\033[0;35m"$(TARGET)"\033[1;32m compilated !\033[0m"

$(OBJECTS) : $(OBJDIR)/%.o : $(SRCDIR)/%.c
	@$(mkdir) $(OBJDIR) $(UTILSDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "\033[1;32m  [OK]  \033[1;36m"$<"\033[0m"

all	: $(OBJECTS) $(TARGET)

clean	:
	@$(rm) $(OBJDIR)
	@echo "\033[1;31mBinary files deleted\033[0m"

fclean	: clean
	@$(rm) $(TARGET)
	@echo "\033[1;31mBinary and executable files are deleted\033[0m"

re	: fclean all

.PHONY	: all clean fclean re
