# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 06:28:07 by vharatyk          #+#    #+#              #
#    Updated: 2024/08/01 14:44:15 by vharatyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = ZombieHorde

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re

