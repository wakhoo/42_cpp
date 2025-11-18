/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:36:47 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/05 19:12:14 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Intern
{
	public:
		Intern(void);
		Intern(const Intern & copy);
		Intern& operator=(const Intern& copy);
		~Intern(void);
		AForm* makeForm(std::string name, std::string target);
		class WrongCommand : public std::exception
		{
			const char *what() const throw();
		};
};