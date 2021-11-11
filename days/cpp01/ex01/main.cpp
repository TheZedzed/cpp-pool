/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 10:50:18 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/24 13:03:18 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void) {
	Zombie	*horde;

	horde = zombieHorde(6, "zed");
	for (int i = 0; i < 6; i++) {
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
