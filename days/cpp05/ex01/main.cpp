/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:22:35 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/13 11:58:47 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {
	try {
		//Bureaucrat	one("zed", -4);
		//Bureaucrat	two("zed", 5550);
		Bureaucrat	three("zed", 142);
		//Form		bill("school", 10, 13);
		Form		bill("school", 142, 13);

		std::cout << three << std::endl;
		bill.beSigned(three);
		//three.downgrade();
		//bill.beSigned(three);
		three.upgrade();
		bill.beSigned(three);
	}
	catch (std::exception& e) {
		std::cout << e.what();
	}
	return 0;
}
