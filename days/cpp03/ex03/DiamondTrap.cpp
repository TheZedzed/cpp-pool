#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->_name = "Bot Iron zed";
	std::cout << this->_name << " DiamondTrap constructor called" << std::endl;
	this->_Attackdamage = 100;
	this->_Hitpoints = 1;
	this->_Energypoints = 300;
}

DiamondTrap::DiamondTrap(const std::string& name) {
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	std::cout << this->_name << " DiamondTrap constructor called" << std::endl;
	this->_Attackdamage = 30;
	this->_Hitpoints = 100;
	this->_Energypoints = 50;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cpy) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = cpy;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rgh) {
	if (this != &rgh) {
		this->_name = rgh._name;
		this->_Hitpoints = rgh._Hitpoints;
		this->_Energypoints = rgh._Energypoints;
		this->_Attackdamage = rgh._Attackdamage;
	}
	return *this;
}

void	DiamondTrap::whoAmi(void) const {
	std::cout << "I am <" << this->_name << ">" << " and my superclass is ";
	std::cout << ClapTrap::getName();
}

std::ostream&	operator<<(std::ostream& out, const DiamondTrap& org) {
	out << "DiamondTrap : ";
	org.whoAmi();
	std::cout << "\nhealth: " << org.getHit();
	out << ", attack: " << org.getAtt() << ", energy: " << org.getEner();
	return out;
}
