/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:24:49 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/16 00:24:49 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

Ppardon&	Ppardon::operator=(const Ppardon& rgh) {
	if (this != &rgh)
		_target = rgh._target;
	return *this;
}

void	Ppardon::execute(const Bureaucrat& executor) const {
	const std::string&	error = executor.getName() + " can't execute " + getName();

	if (executor.getGrade() > getXright())
		throw GradeTooLowException("Exception form : " + error);
	std::cout << "President Zafod Beeblerox give his pardon to " + _target << std::endl;
}