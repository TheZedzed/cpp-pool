/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:49:21 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 23:01:10 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon() {
}

Weapon::Weapon(const std::string& name) : _type(name) {
}

const std::string	Weapon::getType() const {
	return this->_type;
}

void	Weapon::setType(const std::string& name) {
	this->_type = name;
}
