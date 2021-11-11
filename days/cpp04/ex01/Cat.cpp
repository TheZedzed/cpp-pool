/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:24:17 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/06 21:31:28 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	_brain = new Brain;
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat& org) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = org;
}

Cat&	Cat::operator=(const Cat& org) {
	if (this != &org) {
		this->_type = org._type;
		this->_brain = new Brain(*(org._brain));
	}
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "* Cat sound *" << std::endl;
}
