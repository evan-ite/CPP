# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evan-ite <evan-ite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 12:51:33 by elisevanite       #+#    #+#              #
#    Updated: 2024/08/21 11:21:42 by evan-ite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean build run

all: clean build

clean:
	@rm -f $(OBJS) $(TARGET)

build: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

run: build
	./$(TARGET)

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $< -o $@
