# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 15:25:17 by elisevanite       #+#    #+#              #
#    Updated: 2024/08/21 11:21:42 by evan-ite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ex02

CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = .objFiles

FILES		= Bureaucrat AForm ShrubberyCreationForm RobotomyRequestForm PresidentialPardonForm main

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HFILES		= Bureaucrat AForm ShrubberyCreationForm RobotomyRequestForm PresidentialPardonForm
HEADER		= $(HFILES:=.hpp)

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
RESET		=	\e[0m

.PHONY: all clean fclean re bonus norm

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)Executable ready: ./$(NAME)$(RESET)\n"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ) *_shrubbery
	@printf "$(YELLOW)Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)Executable removed.$(RESET)\n"

re: fclean all
