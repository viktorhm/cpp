# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vharatyk <vharatyk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 09:41:37 by vharatyk          #+#    #+#              #
#    Updated: 2024/06/06 11:37:01 by vharatyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = phonebook.cpp main.cpp contact.cpp

NAME		= phonebook
SRCS		= phonebook.cpp main.cpp contact.cpp utils.cpp
OBJS		= $(SRCS:.cpp=.o)
CC		= g++
CPPFLAGS		= -pthread -Wextra -Wall -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re