/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:30:34 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/28 17:30:34 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T& a, T& b) {
	T	tmp(a);

	a = b;
	b = tmp;
}

template <typename T>
const T&	min(const T& a, const T& b) {
	return (a < b) ? a : b;
}

template <typename T>
const T&	max(const T& a, const T& b) {
	return (a > b) ? a : b;
}
#endif
