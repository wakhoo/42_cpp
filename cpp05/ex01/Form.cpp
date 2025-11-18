/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:42:17 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/06 15:09:59 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("default"), _signed(false), _gradeSign(30), _gradeExecute(50)
{

}

Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw Form::GradeTooHighException();
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& copy) : _name(copy._name), _signed(copy._signed), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute)
{

}

Form& Form::operator=(const Form& copy)
{
	_signed = copy._signed;
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Contract "<< _name << " is deleted :D" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!! It's not able!");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low XD");
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if ((int)bureaucrat.getGrade() > _gradeSign)
		throw(Form::GradeTooLowException());
	else if (_signed == false)
	{
		this->_signed = true;
		std::cout << bureaucrat.getName() << " signed " << _name <<std::endl;
	}
	else
		std::cout << bureaucrat.getName() << " couldn't sign " << _name << " becasue " << _name << " is already signed!" << std::endl;
}

std::string Form::getName(void) const
{
	return (_name);
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

int Form::getSignGrade(void) const
{
	return (_gradeSign);
}

int Form::getExecuteGrade(void) const
{
	return (_gradeExecute);
}

std::ostream& operator<<(std::ostream &out, const Form& input)
{
	out << input.getName() << "'s Form information." << std::endl;
	out << "Signed: " << input.getSigned() << std::endl;
	out << "Sign Grade: " << input.getSignGrade() << std::endl;
	out << "Execute Grade: " << input.getExecuteGrade() << std::endl;
	return (out);
}
