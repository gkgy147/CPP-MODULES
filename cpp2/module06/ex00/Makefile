# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grobert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/08 10:36:24 by grobert           #+#    #+#              #
#    Updated: 2023/10/08 10:37:06 by grobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ScalarConverter

CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM	= rm -rf

OBJDIR	= .objfiles

FILES	= main ScalarConverter

SRC	= $(FILES:=.cpp)

OBJ	= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER	= ScalarConverter.hpp

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

