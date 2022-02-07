/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 08:15:59 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/07 08:30:03 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename U>
void	iter(T *arr, size_t const len, U (*f)(T &))
{
	size_t	i;

	for (i = 0; i < len; i++)
		f(arr[i]);
}

#endif
