# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 16:07:20 by vharatyk          #+#    #+#              #
#    Updated: 2024/08/05 15:07:30 by vharatyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Harl.cpp
OBJS	= $(SRCS:.cpp=.o)
CXXFLAGS= -Wextra -Wall -Werror -std=c++98 -pedantic
CXX		= g++

NAME	= Harl_2.0

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean r