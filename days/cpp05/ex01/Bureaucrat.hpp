/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:22:35 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/13 11:58:47 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class	Form;

class Bureaucrat {
	public:
		~Bureaucrat() {}
		Bureaucrat(const Bureaucrat&);
		Bureaucrat(const std::string&, int);
		Bureaucrat&	operator=(const Bureaucrat&);
		void		upgrade(void);
		void		downgrade(void);
		void		signForm(Form&);
		int			getGrade(void) const;
		std::string	getName(void) const;
		class		GradeTooLowException;
		class		GradeTooHighException;
	private:
		Bureaucrat() : _name("") {}
		const std::string	_name;
		int					_note;
};

class	Bureaucrat::GradeTooLowException : public std::exception {
	public:
		~GradeTooLowException() throw() {}
		GradeTooLowException(const std::string& error) throw() : _error(error) {}
		const char	*what() const throw() {
			return _error.c_str();
		}
	private:
		std::string	_error;
};

class	Bureaucrat::GradeTooHighException : public std::exception {
	public:
		~GradeTooHighException() throw() {}
		GradeTooHighException(const std::string& error) throw() : _error(error) {}
		const char	*what() const throw() {
			return _error.c_str();
		}
	private:
		std::string	_error;
};

std::ostream&	operator<<(std::ostream&, const Bureaucrat&);
#endif
