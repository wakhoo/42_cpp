/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:32:42 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/12 11:40:23 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc , char **argv)
{
	if (argc != 2)
	{
		std::cout << "./scalar data" << std::endl;
		return (1);
	}
	std::string input_str(argv[1]);
	try
	{
		ScalarConverter::convert(input_str);
	}
	catch (std::exception & e)
	{
		std::cout << "[EXCEPTION] " << e.what() << std::endl;
	}
}