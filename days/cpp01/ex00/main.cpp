/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 10:50:18 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/24 11:58:41 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void) {
	Zombie	*heaped;

	heaped = newZombie("zed");
	heaped->announce();
	RandomChump("alex");
	delete heaped;
	return 0;
}
