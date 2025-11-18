# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/19 00:27:02 by chajeon           #+#    #+#              #
#    Updated: 2025/03/31 20:37:14 by chajeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.
RM = rm -f
INCLUDES = Contact.hpp PhoneBook.hpp
SRC =	Contact.cpp	\
		PhoneBook.cpp	\
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