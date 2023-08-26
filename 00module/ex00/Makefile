# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grobert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 08:56:34 by grobert           #+#    #+#              #
#    Updated: 2023/08/19 09:12:28 by grobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM	= rm -rf

.PHONY:	all clean re

all: $(NAME)

$(NAME):
	@ $(CC) $(FLAGS) megaphone.cpp -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all
