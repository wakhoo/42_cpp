/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:49:31 by chajeon           #+#    #+#             */
/*   Updated: 2025/03/19 00:49:31 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    oldestIndex = 0;
    currentIndex = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook Destroyed" << std::endl;
}

void    PhoneBook::addContact()
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    
    std::cout << "Enter FirstName: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter LastName: ";
    std::getline(std::cin, lastName);
    std::cout << "Enter NickName: ";
    std::getline(std::cin, nickName);
    std::cout << "Enter PhoneNumber: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Enter DarkestSecret: ";
    std::getline(std::cin, darkestSecret);
	if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() || darkestSecret.empty())
	{
		std::cout << "Empty data is not allowed" << std::endl;
		return ;
	}
    if (currentIndex < 8)
	{
		contacts[currentIndex].setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
		currentIndex++;
	}      
    else
    {
        contacts[oldestIndex].setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
        oldestIndex = (oldestIndex + 1) % 8;
    }
    std::cout << "Contact added successfully!\n";
}

bool    PhoneBook::searchContact() const
{
    int getIndex;

    std::cout << "|" << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nick Name" << "|" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        contacts[i].listContact(i);
    }
    std::cout << "Enter Index: ";
    std::cin >> getIndex;
	if(std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return (1);
	}
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (getIndex >= 0 && getIndex < 8)
    	contacts[getIndex].displayContact();
	else
		return (1);
    return (0);
}
