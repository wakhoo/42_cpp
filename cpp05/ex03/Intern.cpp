/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:36:51 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/05 19:19:56 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{

}

Intern::Intern(const Intern & copy)
{
	(void)copy;
}

Intern& Intern::operator=(const Intern& copy)
{
	(void)copy;
	return (*this);
}

Intern::~Intern(void)
{

}
const char *Intern::WrongCommand::what() const throw()
{
	return ("Work doesn't exist. I can't done your request..");
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for(; i < 3; i++)
	{
		if (name == forms[i])
			break ;
	}
	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return (new ShrubberyCreationForm(target));
			break;
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return (new RobotomyRequestForm(target));
			break;
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return (new PresidentialPardonForm(target));
			break;
		default:
			throw Intern::WrongCommand();
			break;
	}
}
