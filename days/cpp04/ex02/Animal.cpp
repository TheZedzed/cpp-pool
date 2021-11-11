/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:24:16 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/06 21:31:28 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->_type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& org) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = org;
}

Animal&	Animal::operator=(const Animal& org) {
	if (this != &org) {
		this->_type = org._type;
	}
	return *this;
}

std::string	Animal::getType(void) const {
	return this->_type;
}
