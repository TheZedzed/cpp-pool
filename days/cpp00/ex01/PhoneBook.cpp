/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:58:05 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/23 17:58:06 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->index = -1;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Close PhoneBook..." << std::endl;
}

void	PhoneBook::add(void) {
	std::cout << "Last contact will be replaced if no space left" << std::endl;
	if (this->index < 7)
		++this->index;
	memory[index].fill();
}

bool	PhoneBook::numeric(std::string name) {
	std::locale	loc;

	for (int i = 0; i < (int)name.length(); i++) {
		if (!isdigit(name[i], loc))
			return (false);
	}
	return (true);
}

void	PhoneBook::sch(void) {
	std::string	choice;
	int			res;

	std::cout << "Contact in memory:" << std::endl;
	std::cout << std::internal << std::setw(5) << "index";
	std::cout << " | " << std::setw(10) << "first name";
	std::cout << " | " << std::setw(10) << "last name";
	std::cout << " | " << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i <= this->index; i++) {
		std::cout << std::setw(5) << i << " | ";
		this->memory[i].print();
	}
	std::cout << "\nSelect desired index" << std::endl;
	if (std::getline(std::cin, choice))
	{
		if (numeric(choice))
		{
			res = stoi(choice);	
			if (res > this->index)
				std::cout << "Bad index" << std::endl;
			else if (this->index < 0)
				std::cout << "Empty memory" << std::endl;
			else
				this->memory[res].info();	
		}
		else
				std::cout << "Bad value" << std::endl;
	}
}


