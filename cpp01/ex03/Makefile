# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/04 00:39:12 by chajeon           #+#    #+#              #
#    Updated: 2025/04/08 06:52:10 by chajeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = war
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.
RM = rm -f
INCLUDES = HumanA.hpp HumanB.hpp Weapon.hpp
SRC =	HumanA.cpp	\
		HumanB.cpp \
		Weapon.cpp \
		main.cpp
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