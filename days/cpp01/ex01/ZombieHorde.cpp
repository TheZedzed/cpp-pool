/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:35:04 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/24 12:59:55 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string zname) {
	Zombie	*horde = new Zombie [N];

	for (int i = 0; i < N; i++) {
		horde[i].set_name(zname);
	}
	return horde;
}
