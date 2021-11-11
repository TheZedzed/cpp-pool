/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:59:55 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/28 17:59:56 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Bot Iron max") {
	std::cout << this->_name << " ClapTrap constructor called" << std::endl;
	this->_Attackdamage = 100;
	this->_Hitpoints = 1;
	this->_Energypoints = 100;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name) {
	std::cout << this->_name << " ClapTrap constructor called" << std::endl;
	this->_Attackdamage = 0;
	this->_Hitpoints = 10;
	this->_Energypoints = 10;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = cpy;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rgh) {
	this->_name = rgh.getName();
	this->_Hitpoints = rgh.getHit();
	this->_Energypoints = rgh.getEner();
	this->_Attackdamage = rgh.getAtt();
	return *this;
}

std::string		ClapTrap::getName(void) const {
	return this->_name;
}

unsigned int	ClapTrap::getAtt(void) const {
	return this->_Attackdamage;
}

unsigned int	ClapTrap::getEner(void) const {
	return this->_Energypoints;
}

unsigned int	ClapTrap::getHit(void) const {
	return this->_Hitpoints;
}

void	ClapTrap::attack(const std::string& target) {
	std::cout << this->getName() << " attacks " << target << " and deals ";
	std::cout << this->getAtt() << " physical damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->getName() << " takes " << amount << " brut damage!";
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << this->getName() << " heals " << amount << " missing health!";
	std::cout << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const ClapTrap& org) {
	out << "ClapTrap: " << org.getName() << "\nhealth: " << org.getHit();
	out << ", attack: " << org.getAtt() << ", energy: " << org.getEner();
	return out;
}
