/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:36:34 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/23 14:36:34 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void) {
	srand(time(0));
	int	choice = rand() % 100;

	if (choice % 2)
		return new A;
	else if (choice % 3)
		return new B;
	return new C;
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void	identify(Base& p) {
	try {	
		(void)dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << "B\n";
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl;
			try {
				(void)dynamic_cast<C&>(p);
				std::cout << "C\n";
			}
			catch (std::exception& e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
}

int	main(void) {
	Base*	test1 = generate();

	identify(test1);
	if (test1) {
		Base&	test2 = *test1;
		identify(test2);
	}
	delete test1;
	return 0;
}
