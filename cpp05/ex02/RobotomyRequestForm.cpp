/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 20:50:54 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/05 18:27:03 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("Default target")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm("RobotomyRequestForm", 72, 45), _target(copy._target)
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	_target = copy._target;
	this->setSigned(copy.getSigned());
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getSignGrade() || this->getSigned() != true)
		throw AForm::ContractIsNotSigned();
	if ( executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	srand(time(NULL));
	int tmp = rand() % 2;
	std::cout << "CANG CANG Brizzzzz UWINGGGGGG...." << std::endl;
	if (tmp == 1)
		std::cout << _target << " has been robotomized. 🤖" << std::endl;
	else
		std::cout << _target << " has failed to be a robot.." << std::endl;
}
