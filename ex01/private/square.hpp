/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 08:40:17 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 08:42:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUARE_HPP
# define SQUARE_HPP

template <typename T>
T	square(T &val)
{
	return val *= val;
}

#endif
