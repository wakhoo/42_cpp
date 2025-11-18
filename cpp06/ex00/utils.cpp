/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:27:19 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/12 11:39:41 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>
#include <limits>
#include <cstdlib>

int isInt(std::string input)
{
	size_t i = 0;

	if (input[0] == '-' || input[0] == '+')
		i++;
	while (i < input.length())
	{
		if (!isdigit(input[i]) || input.length() > 11)
			return (0);
		i++;
	}
	return (1);
}

int isFloat(std::string input, size_t dot, size_t f)
{
	if (input.length() - 1 != f)
		return (0);
	for (size_t i = 0; i < dot; i++)
	{
		if (!isdigit(input[i]))
			return (0);
	}
	for (size_t i = dot + 1; i < input.length() -1; i++)
	{
		if (!isdigit(input[i]))
			return (0);
	}
	return (1);
}

int typeCheck(std::string input)
{
	size_t dot = input.find('.');
	size_t f = input.find('f');

	if (dot == std::string::npos)
	{
		if (input == "+inff" || input == "-inff" || input == "nanf" || input == "-inf" || input == "+inf" || input == "nan")
			return (SPECIAL);
		if (input.length() == 1 && !isdigit(input[0]))
			return (CHAR);
		if (isInt(input))
			return (INT);
	}
	else if (dot != std::string::npos && f == std::string::npos)
		return (DOUBLE);
	else if (dot != std::string::npos && f != std::string::npos)
	{
		if (isFloat(input, dot, f))
			return (FLOAT);
	}
	return (-1);
}

void convertSpecial(std::string input)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (input == "nan" || input == "nanf")
	{
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
	}
	else if (input == "+inf" || input == "+inff")
	{
		std::cout << "float: " << "+inff" << std::endl;
		std::cout << "double: " << "+inf" << std::endl;
	}
	else if (input == "-inf" || input == "-inff")
	{
		std::cout << "float: " << "-inff" << std::endl;
		std::cout << "double: " << "-inf" << std::endl;
	}
}

void convertChar(std::string input)
{
	char data = input[0];
	std::cout << "char: " << "'" << input << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(data)  << std::endl;
	std::cout << "float: " << static_cast<float>(data)  << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(data)  << std::endl;
}
void convertInt(std::string input)
{
	int data = std::atol((char *)input.c_str());
	if (data < 0 || data > 127)
		std::cout << "char: impossible" << std::endl;
	else if (data >= 0 && data <= 31)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << static_cast<char>(data) << "'" << std::endl;
	if (static_cast<long>(data) < std::numeric_limits<int>::min() || static_cast<long>(data) > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << data << std::endl;
	if (static_cast<float>(data) == static_cast<long>(data))
		std::cout << "float: " << static_cast<float>(data)  << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(data)  << "f" << std::endl;
	if (static_cast<double>(data) == static_cast<long>(data))
		std::cout << "double: " << static_cast<double>(data)  << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(data)  << std::endl;
}
void convertDouble(std::string input)
{
	double data = std::atof((char *)input.c_str());
	if (data < 0 || data > 127)
		std::cout << "char: impossible" << std::endl;
	else if (data >= 0 && data <= 31)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << static_cast<char>(data) << "'" << std::endl;
	if (static_cast<long>(data) < std::numeric_limits<int>::min() || static_cast<long>(data) > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(data)  << std::endl;
	if (static_cast<double>(data) < std::numeric_limits<float>::min() || static_cast<double>(data) > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else if (static_cast<float>(data) == static_cast<long>(data))
		std::cout << "float: " << static_cast<float>(data)  << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(data)  << "f" << std::endl;
	if (static_cast<long double>(data) < std::numeric_limits<double>::min() || static_cast<long double>(data) > std::numeric_limits<double>::max())
		std::cout << "double: impossible" << std::endl;
	if (static_cast<double>(data) == static_cast<long>(data))
		std::cout << "double: " << static_cast<double>(data)  << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(data)  << std::endl;
}
void convertFloat(std::string input)
{
	float data = std::atof((char *)input.c_str());
	if (data < 0 || data > 127)
		std::cout << "char: impossible" << std::endl;
	else if (data >= 0 && data <= 31)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << "'" << static_cast<char>(data) << "'" << std::endl;
	if (static_cast<long>(data) < std::numeric_limits<int>::min() || static_cast<long>(data) > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(data)  << std::endl;
	if (static_cast<double>(data) < std::numeric_limits<float>::min() || static_cast<double>(data) > std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else if (static_cast<float>(data) == static_cast<long>(data))
		std::cout << "float: " << static_cast<float>(data)  << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(data)  << "f" << std::endl;
	if (static_cast<double>(data) == static_cast<long>(data))
		std::cout << "double: " << static_cast<double>(data)  << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(data)  << std::endl;
}
