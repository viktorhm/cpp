# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 07:11:17 by vharatyk          #+#    #+#              #
#    Updated: 2024/07/23 07:15:32 by vharatyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = HI_THIS_IS_BRAIN

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re

