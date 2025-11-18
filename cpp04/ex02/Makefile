# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/04 00:39:12 by chajeon           #+#    #+#              #
#    Updated: 2025/05/03 12:08:36 by chajeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstract
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I.
RM = rm -f
INCLUDES =  AAnimal.hpp WrongAnimal.hpp WrongCat.hpp Cat.hpp Dog.hpp Brain.hpp
SRC = main.cpp \
		 AAnimal.cpp \
		 WrongAnimal.cpp \
		 WrongCat.cpp \
		 Cat.cpp \
		 Dog.cpp \
		 Brain.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re