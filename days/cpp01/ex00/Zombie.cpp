/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 23:13:59 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 23:14:01 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
