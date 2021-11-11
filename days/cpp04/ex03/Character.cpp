/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:31:57 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/08 22:31:57 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int	Character::_space_left = 4;

Character::Character(const std::string& name) {
	this->_name = name;
	for (int i=0; i < 4; i++) this->_inventory[i] = 0;
}

Character::~Character() {
	for (int i=0; i < 4 - _space_left; i++) {
		delete _inventory[i];
	}
}

Character::Character(const Character& org) {
	*this = org;
}

Character&	Character::operator=(const Character& rgh) {
	if (this != &rgh) {
		this->_name = rgh._name;
		for (int i=0; i < 4 - _space_left; i++) {
			delete _inventory[i];
		}
		this->_space_left = rgh._space_left;
		for (int i=0; i < 4 - _space_left; i++) {
			this->_inventory[i] = rgh._inventory[i]->clone();
		}
	}
	return *this;
}

void				Character::equip(AMateria* elem) {
	if (this->_space_left && elem) {
		this->_inventory[4 - _space_left] = elem;
		--_space_left;
	}
}

void				Character::unequip(int index) {
	if (index > -1 && index < 4 && this->_inventory[index]) {
		_inventory[index] = 0;
		while (++index < 4 && _inventory[index]) {
			_inventory[index - 1] = _inventory[index];
		}
		++_space_left;
	}
}

void				Character::use(int index, ICharacter& target) {
	if (index > -1 && index < 4 && _inventory[index]) {
		_inventory[index]->use(target);
	}
}

const std::string&	Character::getName(void) const {
	return this->_name;
}
