/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:25:44 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 22:25:46 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
//https://embed.planetcalc.com/8108/

int		main(void) {
	Point	a(-10, 0);
	Point	b(10, 0);
	Point	c(0, 10);
	Point	p(-5, 4);

	Point	d(a);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << "point inside: " << bsp(a, b, c, p) << std::endl;
	return 0;
}
