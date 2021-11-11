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

#include "Fixed.hpp"

int		main(void) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	Fixed	c(b);
	Fixed	d = c;
	std::cout << c << std::endl;
	c.setRawBits(11);
	std::cout << b << std::endl;
	std::cout << d << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
