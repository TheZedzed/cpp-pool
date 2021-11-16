/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:24:49 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/16 00:24:49 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

Screation&	Screation::operator=(const Screation& rgh) {
	if (this != &rgh)
		_target = rgh._target;
	return *this;
}

void	Screation::execute(const Bureaucrat& executor) const {
	const std::string&	error = executor.getName() + " can't execute " + getName();
	const std::string&	shrub =
"   oxoxoo    ooxoo\n\
  ooxoxo oo  oxoxooo\n\
 oooo xxoxoo ooo ooox\n\
 oxo o oxoxo  xoxxoxo\n\
  oxo xooxoooo o ooo\n\
   ooo\\oo\\  /o/o\n\
	\\  \\/ /\n\
	 |   /\n\
	 |  |\n\
	 | D|\n\
	 |  |\n\
	 |  |\n\
  ______/____\\____\n";

	if (executor.getGrade() > getXright())
		throw GradeTooLowException("Exception form : " + error);
	std::fstream	out;

	out.open((_target + "_shrubbery").c_str(), std::fstream::out);
	if (out.is_open()) {
		out << shrub;
		out.close();
	}
}