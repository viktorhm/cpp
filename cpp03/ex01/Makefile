# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/28 13:37:42 by vharatyk          #+#    #+#              #
#    Updated: 2024/08/02 15:34:15 by vharatyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp ClapTrap.cpp  ScavTrap.cpp  
OBJ = $(SRC:.cpp=.o)
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic 

NAME = a.out

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re

