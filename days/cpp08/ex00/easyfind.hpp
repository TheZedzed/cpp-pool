/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:38:37 by azeraoul          #+#    #+#             */
/*   Updated: 2021/12/06 10:30:32 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>

template<typename T>
void	easyfind(T container, int ref) {
	typename T::iterator	found;

	found = find(container.begin(), container.end(), ref);
	if (found != container.end()) {std::cout << "Item found!\n"; return ;}
	throw "Item not found!\n";
}
#endif
