/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:04:47 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/25 10:02:27 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

template <typename T>
class Array
{
private:
	// Attributes
	T		*_array;
	uint	_size;

	class OutOfRangeException : public std::exception
	{
	private:
		// Member functions
		virtual char const	*what(void) const throw()
		{
			return "index is out of range";
		}
	};

public:
	// Constructors
	Array<T>(uint const n = 0) :
		_array(new T[n]()),
		_size(n)
	{
		if (DEBUG)
			std::cout
			<< "Creating Array"
			<< std::endl;
	}
	Array<T>(Array<T> const &src) :
		_array(new T[src._size]()),
		_size(src._size)
	{
		uint	idx;

		if (DEBUG)
			std::cout
			<< "Creating Array"
			<< std::endl;
		for (idx = 0; idx < _size; ++idx)
			_array[idx] = src._array[idx];
	}

	// Destructors
	virtual ~Array<T>(void) {
		if (DEBUG)
			std::cout
			<< "Destroying Array"
			<< std::endl;
		delete [] this->_array;
	}

	// Accessors
	uint	size(void) const
	{
		if (DEBUG)
			std::cout
			<< "Calling Array::size()"
			<< std::endl;
		return this->_size;
	}

	// Operators
	Array	&operator=(Array<T> const &rhs)
	{
		uint	idx;

		if (DEBUG)
			std::cout
			<< "Calling Array::operator=()"
			<< std::endl;
		if (this != &rhs)
		{
			delete [] this->_array;
			this->_array = new T[rhs._size];
			for (idx = 0 ; idx < rhs._size ; ++idx)
				this->_array[idx] = rhs._array[idx];
		}
		return *this;
	}

	T	&operator[](uint const idx)
	{
		if (idx >= this->_size)
			throw OutOfRangeException();
		return this->_array[idx];
	}
};

template <typename T>
std::ostream	&operator<<(std::ostream &o, Array<T> &rhs)
{
	uint	idx;

	o << "Array:" << std::endl;
	for (idx = 0 ; idx < rhs.size() ; ++idx)
		o << "\t" "_array[" << idx << "]: " << rhs[idx] << std::endl;
	return o;
}

#endif
