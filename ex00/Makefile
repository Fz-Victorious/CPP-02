# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/24 17:19:40 by fabou-za          #+#    #+#              #
#    Updated: 2022/12/25 22:34:04 by fabou-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixedPoint
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

SRC_NAME =	main.cpp Fixed.cpp

HEADERS = Fixed.hpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ_NAME)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ_NAME)
fclean: clean
	rm -rf $(NAME)
re: fclean all
