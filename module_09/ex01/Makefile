# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 15:25:17 by elisevanite       #+#    #+#              #
#    Updated: 2024/08/26 21:53:59 by elisevanite      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= RPN

CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = .objFiles

FILES		= main RPN

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HFILES		= RPN
HEADER		= $(HFILES:=.hpp)

#Colors:
GREEN		=	\033[92;5;118m
YELLOW		=	\033[93;5;226m
RESET		=	\033[0m

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
