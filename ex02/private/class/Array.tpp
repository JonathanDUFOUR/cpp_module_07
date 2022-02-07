/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:04:47 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 12:30:00 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iostream>

template <class T>
class Array
{
private:
	T				*_array;
	unsigned int	_size;

protected:

public:
	// Constructors
	Array<T>(void) :
		_array(NULL),
		_size(0)
	{
		std::cout
		<< "Default Array<T> constructor"
		<< std::endl;
	}
	Array<T>(Array<T> const &src) :
		_array(NULL),
		_size(src._size)
	{
		std::cout
		<< "Copy Array<T> constructor"
		<< std::endl;
		*this = src;
	}
	Array<T>(unsigned int const n) :
		_array(NULL),
		_size(n)
	{
		std::cout
		<< "Param Array<T> constructor"
		<< std::endl;
		this->_array = new T[n]();
	}

	// Destructors
	virtual ~Array<T>(void) {
		std::cout
		<< "Array<T> destructor"
		<< std::endl;
		delete [] this->_array;
	}

	// Accessors
	unsigned int	size(void) const
	{
		return this->_size;
	}

	// Operators
	Array	&operator=(Array<T> const &rhs)
	{
		unsigned int	i;

		std::cout
		<< "Array<T> assignment operator"
		<< std::endl;
		if (this != &rhs)
		{
			delete [] this->_array;
			this->_array = new T[rhs._size];
			for (i = 0 ; i < rhs._size ; ++i)
				this->_array[i] = rhs._array[i];
		}
		return (*this);
	}

	T	&operator[](unsigned int const i)
	{
		if (i >= this->_size)
			throw std::exception();
		return this->_array[i];
	}
};

template <typename T>
std::ostream	&operator<<(std::ostream &o, Array<T> &rhs)
{
	unsigned int	i;

	o << "Array:" << std::endl;
	for (i = 0 ; i < rhs.size() ; ++i)
		o << "\t" "_array[" << i << "]: " << rhs[i] << std::endl;
	return (o);
}

#endif
