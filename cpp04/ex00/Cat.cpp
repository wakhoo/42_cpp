/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:10:48 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/29 15:46:08 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Create a Cat!" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Copy of Cat!" << std::endl;
	this->_type = copy._type;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Copy assign of Cat!" << std::endl;
	this->_type = copy._type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << this->_type << " went to rest on the tree :D" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow~" << std::endl;
}