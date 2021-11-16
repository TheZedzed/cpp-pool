/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:24:49 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/16 00:24:49 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class Ppardon : public Form {
	public:
		~Ppardon() {}
		Ppardon(const std::string& name) : Form(name, 25, 5), _target(name) {}
		Ppardon(const Ppardon& org) : Form(org.getName(), 25, 5), _target(org.getName()) {}
		Ppardon&	operator=(const Ppardon&);
		void		execute(const Bureaucrat&) const;
	private:
		Ppardon();
		std::string	_target;
};
#endif
