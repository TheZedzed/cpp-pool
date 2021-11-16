/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:24:49 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/16 14:28:39 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>

class Rrequest : public Form {
	public:
		~Rrequest() {}
		Rrequest(const std::string& name) : Form(name, 72, 45), _target(name) {}
		Rrequest(const Rrequest& org) : Form(org.getName(), 72, 45), _target(org.getName()) {}
		Rrequest&	operator=(const Rrequest&);
		void		execute(const Bureaucrat&) const;
	private:
		Rrequest();
		std::string	_target;
};
#endif
