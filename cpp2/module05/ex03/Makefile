# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 17:25:41 by grobert           #+#    #+#              #
#    Updated: 2023/10/14 15:13:21 by grobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Intern

CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM	= rm -rf

OBJDIR	= .objfiles

FILES	= main Bureaucrat AForm PresidentialPardonForm RobotomyRequestForm ShrubberyCreationForm Intern

SRC	= $(FILES:=.cpp)

OBJ	= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER	= Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

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
