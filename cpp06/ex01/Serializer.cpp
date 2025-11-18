/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:37:50 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/12 12:06:24 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{

}

Serializer::Serializer(const Serializer& copy)
{
	(void)copy;
}

Serializer& Serializer::operator=(const Serializer& copy)
{
	(void)copy;
	return (*this);
}

Serializer::~Serializer(void)
{
	
}

long int Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<long int>(ptr));
}

Data* Serializer::deserialize(long int raw)
{
	return (reinterpret_cast<Data *>(raw));
}
