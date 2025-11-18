/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:22:26 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/29 15:53:08 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Create a WrongCat!" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "Copy of WrongCat!" << std::endl;
	this->_type = copy._type;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "Copy assign of WrongCat!" << std::endl;
	this->_type = copy._type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << this->_type << " fall down from the tree :D" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Beauwww~" << std::endl;
}