/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:42:41 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/04 20:34:17 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExecute;
	public:
		Form(void);
		Form(std::string name, int gradeSign, int gradeExecute);
		Form(const Form& copy);
		Form& operator=(const Form& copy);
		~Form(void);
		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
		void beSigned(const Bureaucrat& bureaucrat);
		std::string getName(void) const;
		bool	getSigned(void) const;
		int getSignGrade(void) const;
		int getExecuteGrade(void) const;
};

std::ostream& operator<<(std::ostream &out, const Form& input);