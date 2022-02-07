/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 07:30:45 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 08:08:46 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <limits>
#include "whatever.hpp"

static void	__test0(void)
{
	int	a;
	int	b;

	a = 846200;
	b = -123456789;
	std::cout << "Before swap: " << std::endl
	<< "\t" "a: " << a << std::endl
	<< "\t" "b: " << b << std::endl;
	::swap<int>(a, b);
	std::cout << "After swap: " << std::endl
	<< "\t" "a: " << a << std::endl
	<< "\t" "b: " << b << std::endl;
	std::cout << "max(a, b): " << ::max<int>(a, b) << std::endl;
	std::cout << "min(a, b): " << ::min<int>(a, b) << std::endl;
}

static void	__test1(void)
{
	short	a;
	short	b;

	a = -1839;
	b = -1839;
	std::cout << "Before swap: " << std::endl
	<< "\t" "a: " << a << std::endl
	<< "\t" "b: " << b << std::endl;
	::swap<short>(a, b);
	std::cout << "After swap: " << std::endl
	<< "\t" "a: " << a << std::endl
	<< "\t" "b: " << b << std::endl;
	std::cout << "max(a, b): " << ::max<short>(a, b) << std::endl;
	std::cout << "min(a, b): " << ::min<short>(a, b) << std::endl;
}

static void	__test2(void)
{
	long	a;
	long	b;

	a = -48663211281839;
	b = 10000000000000;
	std::cout << "Before swap: " << std::endl
	<< "\t" "a: " << a << std::endl
	<< "\t" "b: " << b << std::endl;
	::swap<long>(a, b);
	std::cout << "After swap: " << std::endl
	<< "\t" "a: " << a << std::endl
	<< "\t" "b: " << b << std::endl;
	std::cout << "max(a, b): " << ::max<long>(a, b) << std::endl;
	std::cout << "min(a, b): " << ::min<long>(a, b) << std::endl;
}

static void	__test3(void)
{
	double	a;
	double	b;

	a = std::numeric_limits<double>::infinity();
	b = -std::numeric_limits<double>::infinity();
	std::cout << "Before swap: " << std::endl
	<< "\t" "a: " << a << std::endl
	<< "\t" "b: " << b << std::endl;
	::swap<double>(a, b);
	std::cout << "After swap: " << std::endl
	<< "\t" "a: " << a << std::endl
	<< "\t" "b: " << b << std::endl;
	std::cout << "max(a, b): " << ::max<double>(a, b) << std::endl;
	std::cout << "min(a, b): " << ::min<double>(a, b) << std::endl;
}

static void	__test4(void)
{
	std::string	a;
	std::string	b;

	a = std::string("Hello");
	b = std::string("World");
	std::cout << "Before swap: " << std::endl
	<< "\t" "a: " << a << std::endl
	<< "\t" "b: " << b << std::endl;
	::swap<std::string>(a, b);
	std::cout << "After swap: " << std::endl
	<< "\t" "a: " << a << std::endl
	<< "\t" "b: " << b << std::endl;
	std::cout << "max(a, b): " << ::max<std::string>(a, b) << std::endl;
	std::cout << "min(a, b): " << ::min<std::string>(a, b) << std::endl;
}

int	main(void)
{
	__test0();
	std::cout << "-----------------------------------------------" << std::endl;
	__test1();
	std::cout << "-----------------------------------------------" << std::endl;
	__test2();
	std::cout << "-----------------------------------------------" << std::endl;
	__test3();
	std::cout << "-----------------------------------------------" << std::endl;
	__test4();
	return EXIT_SUCCESS;
}
