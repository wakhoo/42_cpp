# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 00:27:02 by chajeon           #+#    #+#              #
#    Updated: 2025/04/04 00:41:43 by chajeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.
RM = rm -f
INCLUDES = Account.hpp
SRC =	Account.cpp	\
		tests.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re