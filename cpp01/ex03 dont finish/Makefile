# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 07:23:40 by vharatyk          #+#    #+#              #
#    Updated: 2024/07/23 08:15:37 by vharatyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = Unnecessary_violence

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re