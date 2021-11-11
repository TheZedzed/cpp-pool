/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 23:15:57 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 23:16:00 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
}

Karen::~Karen() {
}

void	Karen::info(void) {
	std::cout << "Info message" << std::endl;
}

void	Karen::error(void)  {
	std::cout << "Error message" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "Warning message" << std::endl;
}

void	Karen::debug(void) {
	std::cout << "Debug message" << std::endl;
}

void	Karen::complain(std::string level) {
	void	(Karen::*ptr)(void) {};

	(!level.compare("ERROR") && (ptr = &Karen::error));
	(!level.compare("WARNING") && (ptr = &Karen::warning));
	(!level.compare("INFO") && (ptr = &Karen::info));
	(!level.compare("DEBUG") && (ptr = &Karen::debug));
	if (ptr)
		(this->*ptr)();
}
