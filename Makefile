##
## MY_RADAR PROJECT, 2022
## My_Hunter
## File description:
## Makefile
##

CC	=	gcc
CFLAGS  = 	-Wextra -Wall -g3
LDFLAGS = 	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

SRC	=	main.c								\
		src/init.c		 					\
		src/init2.c							\
		src/init_pos.c						\
		src/first_parcing.c					\
		src/getline.c						\
		src/browse_menu.c					\
		src/error_handling.c    			\
		src/close_window.c 					\
		src/mouse_pos.c 					\
		src/draw_sprite.c					\
		src/lib/my_putstr.c 				\
		src/lib/my_putchar.c				\
		src/lib/my_str_to_word_array.c		\
		src/lib/my_getnbr.c					\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_radar

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean	:
	$(RM)	$(OBJ)
	$(RM)	*~

fclean	:	clean
	$(RM) -f $(NAME)

re	:	fclean all
