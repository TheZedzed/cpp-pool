/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:22:35 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/09 13:22:35 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {
	try {
		//Bureaucrat	one("zed", -4);
		Bureaucrat	two("zed", 5550);
		Bureaucrat	three("zed", 142);

		std::cout << three << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what();
	}
	return 0;
}
