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

Fixed::Fixed(const int nb) {
	this->setRawBits(nb * (1 << _bits));
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) {
	this->setRawBits(roundf(nb * (1 << _bits)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed&			Fixed::operator=(const Fixed& rhs) {
	std::cout << "Assignation operatror called" << std::endl;
	_raw = rhs.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& rhs) {
	out << rhs.toFloat();
	return out;
}

int		Fixed::toInt(void) const {
	int	tmp = getRawBits() / (1 << _bits);
	return tmp;
}

float	Fixed::toFloat(void) const {
	float	tmp = getRawBits();
	return tmp / (1 << _bits);
}

int		Fixed::getRawBits(void) const {
	return _raw;
}

void	Fixed::setRawBits(int const raw) {
	this->_raw = raw;
}
