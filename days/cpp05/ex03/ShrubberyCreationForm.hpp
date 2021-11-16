/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:24:50 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/16 14:28:39 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class Screation : public Form {
	public:
		~Screation() {}
		Screation(const std::string& name) : Form(name, 145, 137), _target(name) {}
		Screation(const Screation& org) : Form(org.getName(), 145, 137), _target(org.getName()) {}
		Screation&	operator=(const Screation&);
		void		execute(const Bureaucrat&) const;
	private:
		Screation();
		std::string	_target;
};
#endif
