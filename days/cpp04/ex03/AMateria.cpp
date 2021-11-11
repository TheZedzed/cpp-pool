/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 22:49:32 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/08 22:31:57 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) {
	this->_type = type;
}

AMateria::AMateria(const AMateria& org) {
	*this = org;
}

AMateria&	AMateria::operator=(const AMateria& rgh) {
	if (this != &rgh) this->_type = rgh.getType();
	return *this;
}

const std::string&	AMateria::getType(void) const {
	return this->_type;
}

void		AMateria::use(ICharacter& target) {
	std::cout << "AMateria use nothing to " << target.getName() << std::endl;
}
