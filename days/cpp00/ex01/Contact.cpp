/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:59:42 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/22 19:23:06 by thezedzed        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
}

Contact::~Contact(void) {
}

void	Contact::fill(void) {
	std::cout << "Enter first name:" << std::endl;
	std::getline(std::cin, this->fname);
	std::cout << "Enter last name:" << std::endl;
	std::getline(std::cin, this->lname);
	std::cout << "Enter nick name:" << std::endl;
	std::getline(std::cin, this->nname);
	std::cout << "Enter phone number:" << std::endl;
	std::getline(std::cin, this->phone);
	std::cout << "Enter darkest secret:" << std::endl;
	std::getline(std::cin, this->secret);
}

void	Contact::info(void) {
	std::cout << std::right << "First name:" << this->fname << std::endl;
	std::cout << std::right << "Last name:" << this->lname << std::endl;
	std::cout << std::right << "Nickname:" << this->nname << std::endl;
	std::cout << std::right << "Phone number:" << this->phone << std::endl;
	std::cout << std::right << "Darkest secret:" << this->secret << std::endl;
}

void	Contact::print(void) {
	if (fname.length() > 10)
		std::cout << std::right << fname.substr(0, 9) << ".";
	else
		std::cout << std::right << std::setw(10) << fname;
	if (lname.length() > 10)
		std::cout << " | " << std::right << lname.substr(0, 9) << ".";
	else
		std::cout << " | " << std::right << std::setw(10) << lname;
	if (nname.length() > 10)
		std::cout << " | " << std::right << nname.substr(0, 9) << ".";
	else
		std::cout << " | " << std::right << std::setw(10) << nname;
	std::cout << std::endl;
}
