/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:31:57 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/08 22:31:57 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(const Ice& org) {
	*this = org;
}

Ice&	Ice::operator=(const Ice& rgh) {
	if (this != &rgh) {
		_type = rgh._type;
	}
	return *this;
}

Ice*	Ice::clone(void) const {
	return new Ice();
}

void		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName();
	std::cout << " *" << std::endl;
}
