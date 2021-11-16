/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:28:39 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/16 14:28:39 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern {
	public:
		Intern() {}
		~Intern() {}
		Intern(const Intern& org) {*this = org;}
		Intern&	operator=(const Intern&) {return *this;}
		Form*	makeForm(const std::string&, const std::string&);
};
#endif
