# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elisevaniterson <elisevaniterson@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 12:51:33 by elisevanite       #+#    #+#              #
#    Updated: 2024/06/04 13:22:37 by elisevanite      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
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
