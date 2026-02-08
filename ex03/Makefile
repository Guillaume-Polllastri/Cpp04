# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/18 11:36:06 by gpollast          #+#    #+#              #
#    Updated: 2026/02/08 21:00:20 by gpollast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface

SRCS =	srcs/main.cpp \
		srcs/AMateria.cpp \
		srcs/Character.cpp \
		srcs/Cure.cpp \
		srcs/Ice.cpp \
		srcs/MateriaSource.cpp

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

val:
	valgrind --trace-children=yes --leak-check=full --track-origins=yes --track-fds=yes --show-leak-kinds=all ./$(NAME) $(ARGS) || true

.PHONY: all clean fclean re val
