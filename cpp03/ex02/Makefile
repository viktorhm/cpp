# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: viktor <viktor@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/28 13:37:42 by vharatyk          #+#    #+#              #
#    Updated: 2024/10/09 09:42:48 by viktor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = main.cpp ClapTrap.cpp  FragTrap.cpp  
OBJS	= $(SRCS:.cpp=.o)
CXXFLAGS= -Wextra -Wall -Werror -std=c++98 -pedantic
CXX		= g++

NAME	= FragTrap

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean r
