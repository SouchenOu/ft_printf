# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souchen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 18:05:04 by souchen           #+#    #+#              #
#    Updated: 2021/12/07 16:14:18 by souchen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=GCC
FLAGS    = -Wall -Werror -Wextra
AR=ar crs
RM=rm -rf
FICHIER= ft_putchar ft_putnbr ft_putstr ft_printf ft_print_hexa ft_print_hexax \
		 ft_print_point ft_putu
OBJ= $(FICHIER:=.o)
NAME=libftprintf.a
HEADER=ft_printf.h

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@
	
clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME)
re: fclean all
