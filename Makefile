# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/03 19:59:32 by ykopiika          #+#    #+#              #
#    Updated: 2018/11/28 14:32:25 by ykopiika         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
S = *.c
O = *.o
H = libft.h
F = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(F) $(S) -I $(H)
	ar rc $(NAME) $(O)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
