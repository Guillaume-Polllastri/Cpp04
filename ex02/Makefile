# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/18 11:36:06 by gpollast          #+#    #+#              #
#    Updated: 2026/01/29 11:12:04 by gpollast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract_class

SRCS =	srcs/main.cpp \
		srcs/A_Animal.cpp \
		srcs/Dog.cpp \
		srcs/Cat.cpp \
		srcs/Brain.cpp

C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98 -I./includes -g

OBJ_DIR = obj
OBJ = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all : $(NAME)

$(NAME): $(OBJ)
		$(C++) $(C++_FLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
		mkdir -p $(@D)
		$(C++) $(C++_FLAGS) -c $< -o $@

clean : 
		rm -rf $(OBJ_DIR)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
