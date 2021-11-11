/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:31:57 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/08 22:31:57 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(const Cure& org) {
	*this = org;
}

Cure&	Cure::operator=(const Cure& rgh) {
	if (this != &rgh) {
		_type = rgh._type;
	}
	return *this;
}

Cure*	Cure::clone(void) const {
	return new Cure();
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName();
	std::cout << "'s wounds *" << std::endl;
}
