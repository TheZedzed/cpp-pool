#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_name = "Bot Iron kled";
	std::cout << this->_name << " FragTrap constructor called" << std::endl;
	this->_Attackdamage = 100;
	this->_Hitpoints = 1;
	this->_Energypoints = 100;
}

FragTrap::FragTrap(const std::string& name) {
	this->_name = name;
	std::cout << this->_name << " FragTrap constructor called" << std::endl;
	this->_Attackdamage = 30;
	this->_Hitpoints = 100;
	this->_Energypoints = 100;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& cpy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = cpy;
}

FragTrap&	FragTrap::operator=(const FragTrap& rgh) {
	this->_name = rgh.getName();
	this->_Hitpoints = rgh.getHit();
	this->_Energypoints = rgh.getEner();
	this->_Attackdamage = rgh.getAtt();
	return *this;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << this->getName() << " highFives zeb" << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const FragTrap& org) {
	out << "FragTrap: " << org.getName() << "\nhealth: " << org.getHit();
	out << ", attack: " << org.getAtt() << ", energy: " << org.getEner();
	return out;
}
