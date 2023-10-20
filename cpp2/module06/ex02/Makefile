# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 17:59:47 by grobert           #+#    #+#              #
#    Updated: 2023/10/09 18:03:31 by grobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Identifier

CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM	= rm -rf

OBJDIR	= .objfiles

FILES	= main

SRC	= $(FILES:=.cpp)

OBJ	= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER	= Base.hpp

.PHONY:	all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all


