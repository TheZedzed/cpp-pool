/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:00:18 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/28 18:00:19 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main(void) {
	DiamondTrap	a("zed");
	DiamondTrap	b;
	DiamondTrap	c(a);
	DiamondTrap	d = b;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	a.takeDamage(2);
	d.beRepaired(50);
	c.attack("perlinpinpin");
	return 0;
}
