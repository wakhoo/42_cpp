/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:32:21 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/06 14:12:08 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#define SPECIAL 0
#define CHAR 1
#define INT 2
#define DOUBLE 3
#define FLOAT 4

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator=(const ScalarConverter& copy);
		~ScalarConverter();
	public:
		static void convert(std::string input);
		class UnexpectInputException : public std::exception
		{
			const char *what() const throw();
		};
};

int typeCheck(std::string input);

void convertSpecial(std::string input);
void convertChar(std::string input);
void convertInt(std::string input);
void convertDouble(std::string input);
void convertFloat(std::string input);
