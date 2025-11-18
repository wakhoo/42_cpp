/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:58:16 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/29 16:37:23 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain is created!" << std::endl;
	_ideas[0] = "noidea";
}

Brain::Brain(const Brain& copy)
{
	for (int i = 0; i < 100 ; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain& Brain::operator=(const Brain& copy)
{
	for (int i = 0; i < 100 ; i++)
		this->_ideas[i] = copy._ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain has been attacked, and it went to ash..." << std::endl;
}

void Brain::setIdea(int i, std::string idea)
{
	_ideas[i] = idea;	
}

std::string Brain::getIdea(int i)
{
	return (_ideas[i]);
}