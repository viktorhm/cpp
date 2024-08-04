# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 16:27:07 by vharatyk          #+#    #+#              #
#    Updated: 2024/08/04 16:33:33 by vharatyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.o)
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -pedantic
CXX 	= g++

NAME 	= megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
	
re : fclean $(NAME)

.PHONY: all clean fclean re

