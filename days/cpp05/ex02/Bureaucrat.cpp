/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:22:35 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/16 00:24:49 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) {
	if (grade < 1)
		throw GradeTooHighException("Exception : " + _name + " grade too high");
	else if (grade > 150)
		throw GradeTooLowException("Exception : " + _name + " grade too low");
	_note = grade;
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

void	Bureaucrat::upgrade(void) {
	if (_note == 1)
		throw GradeTooHighException("Exception : " + _name + " grade can't be upgrade");
	--_note;
}

void	Bureaucrat::downgrade(void) {
	if (_note == 150)
		throw GradeTooLowException("Exception : " + _name + " grade can't be downgrade");
	++_note;
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& el) {
	out << el.getName() << ", bureaucrat with grade " << el.getGrade();
	return out;
}

void	Bureaucrat::signForm(Form& form) {
	if (form.getSigned())
		std::cerr << "Form already signed!" << std::endl;
	else {
		form.setSigned(true);
		std::cout << form.getName() << " form signed by " << getName() << std::endl;
	}
}

void		Bureaucrat::executeForm(const Form& form) {
	const std::string&	error = "Error when " + _name + " try to execute form " + form.getName();
	
	if (!form.getSigned())
		std::cerr << error + " : not signed" << std::endl;
	else if (_note > form.getXright())
		std::cerr << error + " : wrong xright" <<  std::endl;
	else
	{
		std::cout << _name + " will execute " + form.getName() << std::endl;
		form.execute(*this);
	}
}

int	Bureaucrat::getGrade(void) const {
	return _note;
}

std::string	Bureaucrat::getName(void) const {
	return _name;
}
