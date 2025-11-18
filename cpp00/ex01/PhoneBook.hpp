/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:49:20 by chajeon           #+#    #+#             */
/*   Updated: 2025/03/19 00:49:20 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <limits>

class PhoneBook
{
    private:
        Contact contacts[8];
        int currentIndex;
        int oldestIndex;
    public:
        PhoneBook();
        ~PhoneBook();
        void    addContact();
        bool    searchContact() const;
};

#endif
