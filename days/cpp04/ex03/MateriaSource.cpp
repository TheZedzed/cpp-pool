/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:31:57 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/08 22:31:57 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

int	MateriaSource::_space_left = 4;

MateriaSource::MateriaSource() {
	for (int i=0; i < 4; i++) _memory[i] = 0;
}

MateriaSource::~MateriaSource() {
	for (int i=0; i < 4 - _space_left; i++) delete _memory[i];
}

MateriaSource::MateriaSource(const MateriaSource& org) {
	*this = org;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rgh) {
	if (this != &rgh) {
		this->_space_left = rgh._space_left;
		for (int i=0; i < 4 - _space_left; i++) {
			this->_memory[i] = rgh._memory[i]->clone();
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* elem) {
	if (elem && _space_left) {
		_memory[4 - _space_left] = elem;
		--_space_left;
	}
}

AMateria*	MateriaSource::createMateria(const std::string& type) {
	if (type == "ice" || type == "cure") {
		for (int i=0; i < 4 - _space_left; i++) {
			if (_memory[i]->getType() == type)
				return _memory[i]->clone();
		}
	}
	return (0);
}
