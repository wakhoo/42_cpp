/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:17:31 by chajeon           #+#    #+#             */
/*   Updated: 2025/04/26 14:49:37 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const int value)
{
	this->value = value << bits;
}

Fixed::Fixed(const float value)
{
	this->value = roundf(value * (1 << bits));
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& copyAssign)
{
	if (this != &copyAssign)
		value = copyAssign.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed& other) const 
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const 
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const 
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const 
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other) const 
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const 
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed& other) const 
{
	Fixed res(this->toFloat() + other.toFloat());
	return (res);
}

Fixed Fixed::operator-(const Fixed& other) const 
{
	Fixed res(this->toFloat() - other.toFloat());
	return (res);
}

Fixed Fixed::operator*(const Fixed& other) const 
{
	Fixed res(this->toFloat() * other.toFloat());
	return (res);
}

Fixed Fixed::operator/(const Fixed& other) const 
{
	Fixed res(this->toFloat() / other.toFloat());
	return (res);
}

Fixed& Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->value--;
	return (*this);
}

const Fixed Fixed::operator++(int)
{
	const Fixed res(*this);

	this->value++;
	return (res);

}

const Fixed Fixed::operator--(int)
{
	const Fixed res(*this);

	this->value--;
	return (res);
}

Fixed& Fixed::min(Fixed& one, Fixed& two)
{
	if (one >= two)
		return (two);
	return (one);
}

const Fixed& Fixed::min(const Fixed& one, const Fixed& two)
{
	if (one >= two)
		return (two);
	return (one);
}

Fixed& Fixed::max(Fixed& one, Fixed& two)
{
	if (one >= two)
		return (one);
	return (two);
}

const Fixed& Fixed::max(const Fixed& one, const Fixed& two)
{
	if (one >= two)
		return (one);
	return (two);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed::~Fixed()
{

}

int Fixed::getRawBits( void ) const
{
	return value;
}

void Fixed::setRawBits( int const raw )
{
	value = raw;
}

int Fixed::toInt( void ) const
{
	return (value >> bits);
}

float Fixed::toFloat( void ) const
{
	return ((float)value / (1 << bits));
}