/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:24:17 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/06 21:31:28 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) {
	Cat*	zoo[10];

	for (int i=0; i < 10; i++) {
		zoo[i] = new Cat();
		zoo[i]->makeSound();
	}
	for (int i=0; i < 10; i++) delete zoo[i];
	return 0;
}
