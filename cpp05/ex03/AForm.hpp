/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExecute;
	public:
		AForm(void);
		AForm(std::string name, int gradeSign, int gradeExecute);
		AForm(const AForm& copy);
		AForm& operator=(const AForm& copy);
		virtual ~AForm(void);
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
		void setSigned(bool isSigned);
		class ContractIsNotSigned : public std::exception
		{
			const char *what() const throw();
		};
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream &out, const AForm& input);