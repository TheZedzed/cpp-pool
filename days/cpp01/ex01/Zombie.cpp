/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:03:12 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 23:09:41 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
}

void	Zombie::set_name(std::string name) {
	this->_name = name;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
