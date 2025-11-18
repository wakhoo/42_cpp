/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:32:04 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/06 14:12:18 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	(void)copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy)
{
	(void)copy;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{

}

const char *ScalarConverter::UnexpectInputException::what() const throw()
{
	return ("Unexpect Input");
}

void ScalarConverter::convert(std::string input)
{
	int type = typeCheck(input);

	switch (type)
	{
		case SPECIAL:
			convertSpecial(input);
			break;
		case CHAR:
			convertChar(input);
			break;
		case INT:
			convertInt(input);
			break;
		case DOUBLE:
			convertDouble(input);
			break;
		case FLOAT:
			convertFloat(input);
			break;
		default:
			throw ScalarConverter::UnexpectInputException();
			break;
	}
}
