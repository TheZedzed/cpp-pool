/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:22:35 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/09 13:22:35 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat {
	public:
		virtual ~Bureaucrat();
		Bureaucrat(const std::string&, int);
		Bureaucrat(const Bureaucrat&);
		int			getGrade(void) const;
		std::string	getName(void) const;
		Bureaucrat&	operator=(const Bureaucrat&);
	private:
		Bureaucrat();
		const	std::string	_name;
		int					_note;
};
std::ostream&	operator<<(std::ostream&, const Bureaucrat&);

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::~Bureaucrat()
{
}

#endif