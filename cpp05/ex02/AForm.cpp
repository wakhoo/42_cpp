/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:42:17 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/04 20:39:56 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _name("default"), _signed(false), _gradeSign(30), _gradeExecute(50)
{

}

AForm::AForm(std::string name, int gradeSign, int gradeExecute) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw AForm::GradeTooHighException();
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& copy) : _name(copy._name), _signed(copy._signed), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute)
{

}

AForm& AForm::operator=(const AForm& copy)
{
	_signed = copy._signed;
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "Contract "<< _name << " is deleted :D" << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!! It's not able!");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low XD");
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if ((int)bureaucrat.getGrade() > _gradeSign)
		throw(AForm::GradeTooLowException());
	else if (_signed == false)
	{
		this->_signed = true;
		std::cout << bureaucrat.getName() << " signed " << _name <<std::endl;
	}
	else
		std::cout << bureaucrat.getName() << " couldn't sign " << _name << " becasue " << _name << " is already signed!" << std::endl;
}

std::string AForm::getName(void) const
{
	return (_name);
}

bool	AForm::getSigned(void) const
{
	return (_signed);
}

int AForm::getSignGrade(void) const
{
	return (_gradeSign);
}

int AForm::getExecuteGrade(void) const
{
	return (_gradeExecute);
}

std::ostream& operator<<(std::ostream &out, const AForm& input)
{
	out << input.getName() << "'s AForm inAformation." << std::endl;
	out << "Signed: " << input.getSigned() << std::endl;
	out << "Sign Grade: " << input.getSignGrade() << std::endl;
	out << "Execute Grade: " << input.getExecuteGrade() << std::endl;
	return (out);
}
void AForm::setSigned(bool isSigned)
{
	_signed = isSigned;
}

const char*	AForm::ContractIsNotSigned::what() const throw()
{
	return ("Contract is not signed!");
}