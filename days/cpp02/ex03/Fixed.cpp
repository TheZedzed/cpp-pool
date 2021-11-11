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
}

Fixed::~Fixed() {
}

Fixed::Fixed(const int nb) {
	this->setRawBits(nb * (1 << _bits));
}

Fixed::Fixed(const float nb) {
	this->setRawBits(roundf(nb * (1 << _bits)));
}

Fixed::Fixed(const Fixed& cpy) {
	*this = cpy;
}

Fixed&			Fixed::operator=(const Fixed& rgh) {
	this->setRawBits(rgh.getRawBits());
	return *this;
}
bool			Fixed::operator==(const Fixed& rgh) const {
	return this->_raw == rgh.getRawBits();
}

bool			Fixed::operator!=(const Fixed& rgh) const {
	return this->_raw != rgh.getRawBits();
}

bool			Fixed::operator<=(const Fixed& rgh) const {
	return this->_raw <= rgh.getRawBits();
}

bool			Fixed::operator>=(const Fixed& rgh) const {
	return this->_raw >= rgh.getRawBits();
}

bool			Fixed::operator<(const Fixed& rgh) const {
	return this->_raw < rgh.getRawBits();
}

bool			Fixed::operator>(const Fixed& rgh) const {
	return this->_raw > rgh.getRawBits();
}

Fixed			Fixed::operator+(const Fixed& rgh) const {
	return Fixed(this->_raw + rgh.getRawBits());
}

Fixed			Fixed::operator-(const Fixed& rgh) const {
	return Fixed(this->_raw - rgh.getRawBits());
}

Fixed			Fixed::operator*(const Fixed& rgh) const {
	return Fixed(this->toFloat() * rgh.toFloat());
}

Fixed			Fixed::operator/(const Fixed& rgh) const {
	return Fixed(this->toFloat() / rgh.toFloat());
}

Fixed&			Fixed::operator++(void) {
	++this->_raw;
	return *this;
}

Fixed			Fixed::operator++(int) {
	Fixed	old = *this;
	++this->_raw;
	return old;
}

Fixed&			Fixed::operator--(void) {
	--this->_raw;
	return *this;
}

Fixed			Fixed::operator--(int) {
	Fixed	old = *this;
	--this->_raw;
	return old;
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

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return a;
	return b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a > b)
		return b;
	return a;
}

Fixed&		Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return b;
	return a;
}

Fixed&		Fixed::min(Fixed& a, Fixed& b) {
	if (a > b)
		return b;
	return a;
}
