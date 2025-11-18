/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajeon <chajeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:00:43 by chajeon           #+#    #+#             */
/*   Updated: 2025/05/12 12:35:11 by chajeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <ctime> 
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T	*_array;
		unsigned int _len;
	public:
		Array() : _len(0)
		{
			_array = new T[_len];
		}

		Array(unsigned int len) : _len(len)
		{
			if (_len < 0)
				throw Array::IndexOutbound();
			_array = new T[_len];
		}

		Array(const Array & copy) : _len(copy._len)
		{
			if (_len < 0)
				throw Array::IndexOutbound();
			this->_array = new T[this->_len];
			for (unsigned int i = 0; i < _len; i++)
			{
				this->_array[i] = copy._array[i];
			}
		}

		Array& operator=(const Array & copy)
		{
			if (_len < 0)
				throw Array::IndexOutbound();
			this->_len = copy._len;
			this->_array = new T[this->_len];
			for (unsigned int i = 0; i < _len; i++)
			{
				this->_array[i] = copy._array[i];
			}
			return (*this);
		}
		
		~Array()
		{
			delete [] _array;
		}

		T& operator[](unsigned int index)
		{
			if (index >= _len || index < 0)
				throw Array::IndexOutbound();
			return (this->_array[index]);
		}
		
		class IndexOutbound : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Index out bounds!!");
				}
		};
		
		int size() const
		{
			return ((int)_len);
		}
};