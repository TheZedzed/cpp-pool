/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:08:15 by azeraoul          #+#    #+#             */
/*   Updated: 2021/12/06 12:47:47 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main(void) {
	int					tab[] = {16, 6, 5, 454, 7, -56, 8, 0};
	std::vector<int>	vect(tab, tab + sizeof(tab) / sizeof(int));
	Span	el(8);

	try {
		el.addNumber(vect.begin(), vect.end());
		std::vector<int>::iterator	it = el.getTab().begin();
		std::vector<int>::iterator	ite = el.getTab().end();
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		el.addNumber(4);
		it = el.getTab().begin();
		ite = el.getTab().end();
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		el.addNumber(42);
		el.addNumber(-42);
	}
	catch(const char* e) {
		std::cout << e;
	}
	return 0;
}
