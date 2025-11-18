/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 20:51:01 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/05 18:08:07 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("Default target")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm("ShrubberyCreationForm", 145, 137), _target(copy._target)
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	_target = copy._target;
	this->setSigned(copy.getSigned());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}
const char *ShrubberyCreationForm::FileCreationFail::what() const throw()
{
	return ("File creation fail.");
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string contents = "                                        XXXXXX   X  X  XXXXXXXXXXXXXXXXXXXX     \n\
                                        X    X   X X X     XX    X   XX   X     \n\
                                        X    XXXXX XXX     XXXXXXX   XX   X     \n\
                                        X    X   XX   XX  X X    X   XX   X     \n\
                                        XXXXXX   XX   X XXX XXXXXXXXXXX   X     \n\
         XX                XX                                                   \n\
        XXXX              XXXX                                                  \n\
       XXXXXX            XXXXXX                                                 \n\
     XXXXXXXXXX        XXXXXXXXXX                                               \n\
   XXXXXXXXXXXXXX    XXXXXXXXXXXXXX                                             \n\
    XXXXXXXXXXXX      XXXXXXXXXXXX                                              \n\
         XX                XX                                                   \n\
         XX                XX                   X X X                           \n\
         XX                XX                 X X   X X                         \n\
         XX                XX                X X X X X X                        \n\
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\
                                                                                \n\
      X         X        X        X       X        X               X      X     \n\
                            X           X                   X                   \n\
            X                                   X                    X       X  \n";
	if (executor.getGrade() > this->getSignGrade() || this->getSigned() != true)
		throw AForm::ContractIsNotSigned();
	if ( executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	std::ofstream outFile;
	outFile.open((char *)_target.c_str());
	if (outFile.fail())
		throw ShrubberyCreationForm::FileCreationFail();
	outFile << contents;
	std::cout << _target << " file is created." << std::endl;
}

