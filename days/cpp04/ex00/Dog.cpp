/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:24:17 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/06 21:26:07 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& org) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = org;
}

Dog&	Dog::operator=(const Dog& org) {
	if (this != &org) {
		this->_type = org._type;
	}
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "* Dog sound *" << std::endl;
}
