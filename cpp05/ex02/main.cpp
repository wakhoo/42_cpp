/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:26:27 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/06 14:54:43 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	{
		try
		{
			Bureaucrat coco("CoCo", 120);
			std::cout << coco << std::endl;
			coco.decreaseGrade();
			coco.decreaseGrade();
			std::cout << coco << std::endl;
			Bureaucrat kiki("KiKi", 150);
			std::cout << kiki << std::endl;
			kiki.decreaseGrade();
			std::cout << kiki << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "[EXCEPTION] " << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat coco("CoCo", 130);
			// Bureaucrat coco("CoCo", 138);
			// Bureaucrat coco("CoCo", 147);
			ShrubberyCreationForm shrubbyForm("Shrubby");
			coco.signForm(shrubbyForm);
			coco.executeForm(shrubbyForm);
			std::cout << shrubbyForm;
		}
		catch (std::exception & e)
		{
			std::cout << "[EXCEPTION] " << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat coco("CoCo", 40);
			// Bureaucrat coco("CoCo", 46);
			// Bureaucrat coco("CoCo", 73);
			RobotomyRequestForm robotForm("Robot");
			coco.signForm(robotForm);
			coco.executeForm(robotForm);
		}
		catch (std::exception & e)
		{
			std::cout << "[EXCEPTION] " << e.what() << std::endl;
		}
	}
	{
		try
		{
			// Bureaucrat coco("CoCo", 5);
			// Bureaucrat coco("CoCo", 26);
			Bureaucrat coco("CoCo", 21);
			PresidentialPardonForm presidentForm("President");
			coco.signForm(presidentForm);
			coco.executeForm(presidentForm);
		}
		catch (std::exception & e)
		{
			std::cout << "[EXCEPTION] " << e.what() << std::endl;
		}
	}
	return (0);
}