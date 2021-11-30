/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:30:45 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/28 17:30:45 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T* array, size_t size, void (*f)(const T)) {
	for (size_t i=0; i < size; i++) f(array[i]);
}

template<typename T>
void	prrint(const T el) {
	std::cout << "elem: " << el << " | ";
}
#endif
