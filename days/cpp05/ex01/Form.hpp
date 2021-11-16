/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:58:47 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/13 11:58:47 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		~Form() {}
		Form(const Form&);
		Form(const std::string&, int, int);
		Form&		operator=(const Form&);
		class		GradeTooHighException;
		class		GradeTooLowException;
		int			getXright(void) const;
		int			getWright(void) const;
		bool		getSigned(void) const;
		void		setSigned(bool);
		std::string	getName(void) const;
		void		beSigned(Bureaucrat&);
	private:
		Form();
		bool				_signed;
		const int			_wright;
		const int			_xright;
		const std::string&	_name;
};

class	Form::GradeTooLowException : public std::exception {
	public:
		~GradeTooLowException() throw() {}
		GradeTooLowException(const std::string& error) throw() : _error(error) {}
		const char	*what() const throw() {
			return _error.c_str();
		}
	private:
		std::string	_error;
};

class	Form::GradeTooHighException : public std::exception {
	public:
		~GradeTooHighException() throw() {}
		GradeTooHighException(const std::string& error) throw() : _error(error) {}
		const char	*what() const throw() {
			return _error.c_str();
		}
	private:
		std::string	_error;
};
std::ostream&	operator<<(std::ostream&, const Form&);
#endif
