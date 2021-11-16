/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:58:47 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/13 11:58:47 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::string	Form::getName(void) const {
	return _name;
}

int		Form::getWright(void) const {
	return _wright;
}

int		Form::getXright(void) const {
	return _xright;
}

bool	Form::getSigned(void) const {
	return _signed;
}

void	Form::setSigned(bool sign) {
	_signed = sign;
}

void	Form::beSigned(Bureaucrat& name) {
	if (name.getGrade() > _wright) throw GradeTooLowException("Exception form : can't sign\n");
	name.signForm(*this);
}

Form::Form(const std::string& name, int wright, int xright) : _wright(wright), _xright(xright), _name(name) {
	if (_wright < 1 || _xright < 1)
		throw GradeTooHighException("Exception form : grade too high\n");
	else if (_wright > 150 || _xright > 150)
		throw GradeTooLowException("Exception form : grade too low\n");
	_signed = false;
}

std::ostream&	operator<<(std::ostream& out, const Form& el) {
	out << "Form: " << el.getName() << "\nwrite right: ";
	out << el.getWright() << "\nexec right: " << el.getXright();
	out << "\nsigned: " << el.getSigned();
	return out;
}