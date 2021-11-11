#include "Zombie.hpp"

Zombie*	newZombie(std::string name) {
	Zombie *heaped = new Zombie(name);
	return heaped;
}
