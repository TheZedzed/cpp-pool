/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:24:49 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/16 00:24:49 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

Rrequest&	Rrequest::operator=(const Rrequest& rgh) {
	if (this != &rgh)
		_target = rgh._target;
	return *this;
}

void	Rrequest::execute(const Bureaucrat& executor) const {
	const std::string&	error = executor.getName() + " can't execute " + getName();
	const int			limit = 100;

	srand(time(0));
	if (executor.getGrade() > getXright())
		throw GradeTooLowException("Exception form : " + error);
	std::cout << "zqfnbzkfjbzfkjbzfkjazbfzjafbazjkfbazjfbazfjzbafjzabf" << std::endl;
	if ((rand() % limit) % 2)
		std::cout << _target + " has been robotomized!" << std::endl;
	else
		std::cerr << "failed robotomization" << std::endl;
}