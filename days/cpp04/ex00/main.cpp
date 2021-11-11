/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:24:17 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/06 21:26:07 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void) {
	const Animal*	meta(new Animal());
	const Animal*	j(new Dog());
	const Animal*	i(new Cat());
	const WrongAnimal*	test(new WrongCat());

	std::cout << "meta type : " << meta->getType() << "\nsound : ";
	meta->makeSound();
	std::cout << "i type : " << i->getType() << "\nsound : ";
	i->makeSound();
	std::cout << "j type : " << j->getType() << "\nsound : ";
	j->makeSound();
	std::cout << "test type : " << test->getType() << "\nsound : ";
	test->makeSound();
	delete meta;
	delete j;
	delete i;
	delete test;
	return 0;
}
