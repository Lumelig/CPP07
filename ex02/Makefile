# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/16 14:34:49 by Jpflegha          #+#    #+#              #
#    Updated: 2026/06/16 15:33:41 by Jpflegha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	iter
CC =	c++
CFLAGS =	-Wall -Werror -Wextra -std=c++17
SRC =	main.cpp
OBJ =	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CLFAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all re clean fclean