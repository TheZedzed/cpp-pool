/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:28:38 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/16 14:28:38 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form*	Intern::makeForm(const std::string& what, const std::string& target) {
	Form*	ptr(0);

	(!what.compare("robotomy request") && (ptr = new Rrequest(target)));
	(!what.compare("president pardon") && (ptr = new Ppardon(target)));
	(!what.compare("shrubbery creation") && (ptr = new Screation(target)));
	if (ptr)
		std::cout << "Intern creates " + target + " form" << std::endl;
	else
		std::cerr << "Can't create this form : " + what << std::endl;
	return ptr;
}
