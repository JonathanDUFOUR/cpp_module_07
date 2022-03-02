/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 08:14:06 by jodufour          #+#    #+#             */
/*   Updated: 2022/03/02 21:20:09 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <limits>
#include "decrement.hpp"
#include "half.hpp"
#include "increment.hpp"
#include "iter.hpp"
#include "reverse.hpp"
#include "square.hpp"

typedef unsigned int	uint;

static void	__test0(void)
{
	int		arr[5];
	uint	idx(0U);

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 4;
	std::cout << "Before iter:" << std::endl;
	for ( ; idx < 5U; ++idx)
		std::cout << "\t" "arr[" << idx << "]: " << arr[idx] << std::endl;
	::iter<int>(arr, 5, &increment<int>);
	std::cout << "After iter:" << std::endl;
	for (idx = 0 ; idx < 5U; ++idx)
		std::cout << "\t" "arr[" << idx << "]: " << arr[idx] << std::endl;
}

static void	__test1(void)
{
	short	arr[5];
	uint	idx(0U);

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 4;
	std::cout << "Before iter:" << std::endl;
	for ( ; idx < 5U; ++idx)
		std::cout << "\t" "arr[" << idx << "]: " << arr[idx] << std::endl;
	::iter<short>(arr, 5, &decrement<short>);
	std::cout << "After iter:" << std::endl;
	for (idx = 0 ; idx < 5U; ++idx)
		std::cout << "\t" "arr[" << idx << "]: " << arr[idx] << std::endl;
}

static void	__test2(void)
{
	long	arr[5];
	uint	idx(0U);

	arr[0] = 1;
	arr[1] = -2;
	arr[2] = 3;
	arr[3] = -4;
	arr[4] = 5;
	std::cout << "Before iter:" << std::endl;
	for ( ; idx < 5U; ++idx)
		std::cout << "\t" "arr[" << idx << "]: " << arr[idx] << std::endl;
	::iter<long>(arr, 5, &square<long>);
	std::cout << "After iter:" << std::endl;
	for (idx = 0 ; idx < 5U; ++idx)
		std::cout << "\t" "arr[" << idx << "]: " << arr[idx] << std::endl;
}

static void	__test3(void)
{
	double	arr[5];
	uint	idx(0U);

	arr[0] = 0.0;
	arr[1] = std::numeric_limits<double>::max();
	arr[2] = std::numeric_limits<double>::min();
	arr[3] = std::numeric_limits<double>::infinity();
	arr[4] = std::numeric_limits<double>::quiet_NaN();
	std::cout << "Before iter:" << std::endl;
	for ( ; idx < 5U; ++idx)
		std::cout << "\t" "arr[" << idx << "]: " << arr[idx] << std::endl;
	::iter<double>(arr, 5, &half<double>);
	std::cout << "After iter:" << std::endl;
	for (idx = 0 ; idx < 5U; ++idx)
		std::cout << "\t" "arr[" << idx << "]: " << arr[idx] << std::endl;
}

static void	__test4(void)
{
	std::string	arr[5];
	uint		idx(0U);

	arr[0] = std::string("Hello");
	arr[1] = std::string("World");
	arr[2] = std::string("How");
	arr[3] = std::string("Are");
	arr[4] = std::string("You");
	std::cout << "Before iter:" << std::endl;
	for ( ; idx < 5U; ++idx)
		std::cout << "\t" "arr[" << idx << "]: " << arr[idx] << std::endl;
	::iter<std::string>(arr, 5, &reverse);
	std::cout << "After iter:" << std::endl;
	for (idx = 0 ; idx < 5U; ++idx)
		std::cout << "\t" "arr[" << idx << "]: " << arr[idx] << std::endl;
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
