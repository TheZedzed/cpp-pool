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
	Animal*	zoo[10];

	for (int i=0; i < 10; i++) {
		if (i % 2) zoo[i] = new Cat();
		else zoo[i] = new Dog();
		zoo[i]->makeSound();
	}
	for (int i=0; i < 10; i++) delete zoo[i];
	return 0;
}
