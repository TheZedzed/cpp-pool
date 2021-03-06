/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:19:14 by azeraoul          #+#    #+#             */
/*   Updated: 2021/12/01 17:00:34 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void) {
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<int>	vect(tab, tab + sizeof(tab) / sizeof(int));

	try {
		easyfind(vect, 10);
		easyfind(vect, 4);
	}
	catch(const char* e) {
		std::cout << e;
	}
	return 0;
}
