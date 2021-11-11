#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_name = "Bot Iron serena";
	std::cout << this->_name << " ScavTrap constructor called" << std::endl;
	this->_Attackdamage = 100;
	this->_Hitpoints = 1;
	this->_Energypoints = 100;
}

ScavTrap::ScavTrap(const std::string& name) {
	this->_name = name;
	std::cout << this->_name << " ScavTrap constructor called" << std::endl;
	this->_Attackdamage = 20;
	this->_Hitpoints = 100;
	this->_Energypoints = 50;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = cpy;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rgh) {
	if (this != &rgh) {
		this->_name = rgh.getName();
		this->_Hitpoints = rgh.getHit();
		this->_Energypoints = rgh.getEner();
		this->_Attackdamage = rgh.getAtt();
	}
	return *this;
}

void	ScavTrap::guardGate(void) {
	std::cout << this->getName() << " enterd in gate keeper mode" << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const ScavTrap& org) {
	out << "ScavTrap: " << org.getName() << "\nhealth: " << org.getHit();
	out << ", attack: " << org.getAtt() << ", energy: " << org.getEner();
	return out;
}
