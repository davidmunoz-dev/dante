##
## Makefile for  in /home/munoz_d/dante
## 
## Made by David Munoz
## Login   <munoz_d@epitech.net>
## 
## Started on  Sat May 28 02:23:57 2016 David Munoz
## Last update Sat May 28 02:41:10 2016 David Munoz
##

all	:
	(cd largeur; make all)
	(cd profondeur; make all)
	# (cd astar; make all)
	(cd generateur; make all)

re	:
	(cd largeur; make re)
	(cd profondeur; make re)
	# (cd astar; make re)
	(cd generateur; make re)

clean	:
	(cd largeur; make clean)
	(cd profondeur; make clean)
	# (cd astar; make clean)
	(cd generateur; make clean)

fclean	:
	(cd largeur; make fclean)
	(cd profondeur; make fclean)
	# (cd astar; make fclean)
	(cd generateur; make fclean)

.PHONY: all clean fclean re
