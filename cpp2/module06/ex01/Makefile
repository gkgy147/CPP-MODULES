# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 14:27:02 by grobert           #+#    #+#              #
#    Updated: 2023/10/09 14:27:48 by grobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= Serializer

CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM	= rm -rf

OBJDIR	= .objfiles

FILES	= main Serializer

SRC	= $(FILES:=.cpp)

OBJ	= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER	= Serializer.hpp

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

