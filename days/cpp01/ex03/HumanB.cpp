/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:02:29 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 23:04:49 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB() {
}

HumanB::HumanB(const std::string& name) : _name(name) {
}

void	HumanB::attack() const {
	std::cout << this->_name << " attacks with his "  << this->_weapon->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon& name) {
	this->_weapon = &name;
}
