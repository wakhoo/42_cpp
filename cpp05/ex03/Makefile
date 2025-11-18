# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/04 00:39:12 by chajeon           #+#    #+#              #
#    Updated: 2025/05/05 18:55:23 by chajeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I.
RM = rm -f
INCLUDES =  Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
SRC = main.cpp \
		 Bureaucrat.cpp \
		 PresidentialPardonForm.cpp \
		 RobotomyRequestForm.cpp \
		 ShrubberyCreationForm.cpp \
		 Intern.cpp \
		 AForm.cpp
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