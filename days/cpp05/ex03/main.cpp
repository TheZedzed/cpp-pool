/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:22:35 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/16 14:28:39 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main(void) {
	try {
		//Bureaucrat	one("zed", -4);
		//Bureaucrat	two("zed", 5550);
		Bureaucrat	three("zed", 4);
		Screation	shrub("big");
		Ppardon		fgive("toto");
		Rrequest	ex("E.T.");

		shrub.beSigned(three);
		three.downgrade();
		//fgive.beSigned(three);
		three.executeForm(shrub);
		three.downgrade();
		three.executeForm(shrub);

		Intern	randomT;
		Form*	ref = randomT.makeForm("robotomy request", "zizi");
		delete ref;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
