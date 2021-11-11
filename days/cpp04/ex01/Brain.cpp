/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:31:28 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/06 21:31:28 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& org) {
	std::cout << "Brain copy constructor called" << std::endl;
	if (this != &org) {
		for (int i=0; i < 100; i++) {
			_ideas[i] = org._ideas[i];
		}
	}
}

Brain&	Brain::operator=(const Brain& org) {
	if (this != &org) {
		for (int i=0; i < 100; i++) {
			_ideas[i] = org._ideas[i];
		} 
	}
	return *this;
}
