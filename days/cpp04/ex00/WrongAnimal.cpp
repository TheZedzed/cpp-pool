/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:24:17 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/06 21:26:07 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& org) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = org;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& org) {
	if (this != &org) {
		this->_type = org._type;
	}
	return *this;
}

std::string	WrongAnimal::getType(void) const {
	return this->_type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "* WrongAnimal sound *" << std::endl;
}
