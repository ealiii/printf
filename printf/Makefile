# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eali <eali@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/09 22:56:43 by eali              #+#    #+#              #
#    Updated: 2023/08/15 23:48:35 by eali             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = 			ft_printf.c\
				printing.c\
				printing2.c\
				
OBJS = $(SRC:.c=.o)

all: ${NAME}
${NAME}:	${OBJS}
	ar -rcs ${NAME} ${OBJS}
clean: 
			rm -f ${OBJS}
fclean:
			rm -f ${OBJS} ${NAME}
re:	fclean all 

.PHONY : 	all clean fclean re