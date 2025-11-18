/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:26:30 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/05 13:18:50 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);
		~Bureaucrat(void);
		const std::string getName(void) const;
		int getGrade(void) const;
		void increaseGrade(void);
		void decreaseGrade(void);
		class  GradeTooHighException: public std::exception
		{
			public:
				const char* what() const throw();
		};
		class  GradeTooLowException: public std::exception
		{
			public:
				const char* what() const throw();
		};
		void signForm(AForm& form);
		void executeForm(AForm const & form) const;
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat& input);