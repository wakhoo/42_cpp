/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:49:48 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/01 15:35:25 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    firstName = "";
    lastName = "";
    nickName = "";
    phoneNumber = "";
    darkestSecret = "";
}

Contact::~Contact()
{
    std::cout << "Contact Destroyed" << std::endl;
}

void    Contact::setContact(std::string first, std::string last, 
    std::string nick, std::string phone, std::string darkest)
{
    firstName = first;
    lastName = last;
    nickName = nick;
    phoneNumber = phone;
    darkestSecret = darkest;
}

void    Contact::displayContact() const
{
    std::cout << "FirstName: " << firstName << std::endl;
    std::cout << "LastName: " << lastName << std::endl;
    std::cout << "NickName: " << nickName << std::endl;
    std::cout << "PhoneNumber: " << phoneNumber << std::endl;
    std::cout << "DarkestSecret: " << darkestSecret << std::endl;
}

void     Contact::listContact(int index) const
{
    std::cout << "|" << std::setw(10) << index << "|";
    std::cout << std::setw(10) << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << "|";
    std::cout << std::setw(10) << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << "|";
    std::cout << std::setw(10) << (nickName.length() > 10 ? nickName.substr(0, 9) + "." : nickName) << "|" << std::endl;
}
