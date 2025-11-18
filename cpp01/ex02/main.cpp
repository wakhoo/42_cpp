/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 00:38:52 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/08 06:49:31 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain= "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string &stringREF = brain;
	
	std::cout << "The memory address of brain: " << &brain << std::endl;
	std::cout << "The memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address of stringREF: " << &stringREF << std::endl;

	std::cout << "The value of brain: " << brain << std::endl;
	std::cout << "The value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value of stringREF: " << stringREF << std::endl;
	return (0);
}
