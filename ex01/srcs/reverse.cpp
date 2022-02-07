/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 08:55:20 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 08:56:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

void	reverse(std::string &str)
{
	std::string::iterator	iter0;
	std::string::iterator	iter1;

	iter0 = str.begin();
	iter1 = str.end() - 1;
	while (iter0 < iter1)
	{
		std::swap(*iter0, *iter1);
		++iter0;
		--iter1;
	}
}
