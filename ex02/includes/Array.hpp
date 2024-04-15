/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:31:15 by seozkan           #+#    #+#             */
/*   Updated: 2024/04/15 21:31:20 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
private:
	T *_array;
	unsigned int _size;

public:
	Array(void);
	Array(unsigned int n);
	Array(const Array &a);

	~Array(void);

	class IndexOutOfBounds : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Error: index out of bounds");
		}
	};

	Array &operator=(const Array &a);
	T &operator[](const int n);
	unsigned int size(void);
};