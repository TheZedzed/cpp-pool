/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:05:38 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 23:06:59 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA() {
}

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon) {
}

void	HumanA::attack() const {
	std::cout << this->_name << " attacks with his "  << this->_weapon.getType();
	std::cout << std::endl;
}
