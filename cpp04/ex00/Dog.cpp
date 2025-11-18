/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:12:00 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/29 15:45:26 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Create a Dog!" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Copy of Dog!" << std::endl;
	this->_type = copy._type;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Copy assign of Dog!" << std::endl;
	this->_type = copy._type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << this->_type << " went to rest to Doggy house :D" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woff! Woff!" << std::endl;
}