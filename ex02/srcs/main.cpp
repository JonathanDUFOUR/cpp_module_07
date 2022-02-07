/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:03:44 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 12:29:23 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "class/Array.tpp"

static void	__test0(void)
{
	Array<int>	a(2);

	std::cout << a << std::endl;
}

static void	__test1(void)
{
	Array<short>	a(3);

	std::cout << a << std::endl;
}

static void	__test2(void)
{
	Array<long>	a(4);

	std::cout << a << std::endl;
}

static void	__test3(void)
{
	Array<double>	a(5);

	std::cout << a << std::endl;
}

static void	__test4(void)
{
	Array<std::string>	a(6);

	std::cout << a << std::endl;
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
