/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:26:31 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 22:26:45 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed&	Fixed::operator=(const Fixed& org) {
	std::cout << "Assignation operatror called" << std::endl;
	_raw = org.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}
