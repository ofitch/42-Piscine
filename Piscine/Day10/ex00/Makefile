# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ofitch <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 21:49:05 by ofitch            #+#    #+#              #
#    Updated: 2016/11/08 01:26:31 by ofitch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libft.a

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

HEADER = ./includes/

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all
