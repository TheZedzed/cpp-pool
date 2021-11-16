/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:22:35 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/13 11:58:47 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	Bureaucrat::signForm(Form& form) {
	if (form.getSigned()) std::cout << "Form already signed!";
	else {
		form.setSigned(true);
		std::cout << form.getName() << " form signed by " << getName();
	}
	std::cout << std::endl;
}

int	Bureaucrat::getGrade(void) const {
	return _note;
}

std::string	Bureaucrat::getName(void) const {
	return _name;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rgh) {
	if (this != &rgh) {
		_note = rgh.getGrade();
	}
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& org) {
	*this = org;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException("Exception : grade too high\n");
	else if (grade > 150)
		throw GradeTooLowException("Exception : grade too low\n");
	_note = grade;
}

void	Bureaucrat::upgrade(void) {
	if (_note == 1) throw GradeTooHighException("Exception : grade can't be upgrade");
	--_note;
}

void	Bureaucrat::downgrade(void) {
	if (_note == 150) throw GradeTooLowException("Exception : grade can't be downgrade");
	++_note;
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& el) {
	out << el.getName() << ", bureaucrat with grade " << el.getGrade();
	return out;
}
